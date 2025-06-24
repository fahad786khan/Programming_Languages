#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum ERR {OK, ERROR};
sqlite3 *setupDB();

enum ERR addTodo(sqlite3 *db);
enum ERR markComplete(sqlite3 *db);
enum ERR deleteTodo(sqlite3 *db);
enum ERR updateTodo(sqlite3 *db);
enum ERR listAll(sqlite3 *db);
int numberTodos(sqlite3 *db);
int completedTodos(sqlite3 * db);

void menu(sqlite3 *db);
int main(int argc, char **argv)
{
    sqlite3 *db = setupDB();
    if (!db)
    {
        return 1;
    }
    menu(db);

    sqlite3_close(db);
    return 0;
}

sqlite3 *setupDB()
{
    sqlite3 *db;
    int rc = sqlite3_open("todo.db", &db);

    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "Cannot open database %s\n", sqlite3_errmsg(db));
        return NULL;
    }

    return db;
}

void menu(sqlite3 *db)
{

    printf("----------------------------\n");
    printf("T E R M I N A L    T O D O\n\n");

    char input;
    int count , done;
    while (1)
    {
        if((count = numberTodos(db)) == -1)
            return;
       if((done = completedTodos(db)) == -1)
            return;

       printf("You currently have %d Todos.\n", count);
       printf("You have completed %d Todos!\n", done);
        printf("What would you like todo?\n");
        printf("[A]dd, [L]ist, [C]omplete, [U]pdate, [R]emove, [Q]uit\n");
        printf("> ");
        input = getchar();
        while (getchar() != '\n')
            ;
        printf("\n");
        enum ERR err;
        switch (input)
        {
        case 'A':
        case 'a':
            if((err = addTodo(db)) == ERROR)
                return;
            break;

        case 'L':
        case 'l':
            if((err = listAll(db)) == ERROR)
                return;
            break;

        case 'C':
        case 'c':
            if((err = markComplete(db)) == ERROR)
                return;
            break;

        case 'U':
        case 'u':
            if((err = updateTodo(db)) == ERROR)
                return;
            break;

        case 'R':
        case 'r':
            if((err = deleteTodo(db)) == ERROR)
                return;
            break;

        case 'Q':
        case 'q':
            printf("Thanks for using Terminal Todo\nGoodbye.\n");
            return;
        }
    }
}

enum ERR addTodo(sqlite3 *db){
    char todo[128];
    char sql[256];
    printf("\tenter  todo:  ");
    fgets(todo, sizeof(todo), stdin);
    int loc = strcspn(todo, "\n");
    todo[loc] = '\0';

    sprintf(sql, "insert into todos(Id, Title , Completed) values(NULL, '%s', 0);", todo);
    char *errMsg = 0;
    int rc = sqlite3_exec(db, sql, 0,0, &errMsg); // rc means return code
    if(rc !=   SQLITE_OK){
        fprintf(stderr, "Could not write to DB: %s\n", errMsg);
        sqlite3_free(errMsg);
        return ERROR;
    }
    return OK;
}
enum ERR markComplete(sqlite3 *db){
    char sql[256], mark[4];
    char *errMsg;
    printf("\tenter id to mark complete:  ");
    fgets(mark , sizeof(mark), stdin);
    int id = atoi(mark);
    sprintf(sql, "update Todos set Completed=1 where id=%d;", id);
    int rc = sqlite3_exec(db, sql, 0,0, &errMsg); // rc means return code
    if(rc !=   SQLITE_OK){
        fprintf(stderr, "Could not Complete Todo:  %s\n", errMsg);
        sqlite3_free(errMsg);
        return ERROR;
    }
    return OK;
}
enum ERR deleteTodo(sqlite3 *db){
    char sql[256], mark[4];
    char *errMsg;

    printf("\tenter id to delete:  ");
    fgets(mark, sizeof(mark), stdin);
    int id= atoi(mark);
    sprintf(sql,"delete from Todos where id=%d;", id);

    int rc = sqlite3_exec(db, sql, 0, 0, &errMsg); // rc means return code
    if(rc != SQLITE_OK){
        fprintf(stderr,"Could not delete %s\n",errMsg);
        sqlite3_free(errMsg);
        return ERROR;
    }

    return OK;
}
enum ERR updateTodo(sqlite3 *db){
    char sql[256], mark[4], todo[128];
    char *errMsg;
    printf("\tenter id to edit:  ");
    fgets(mark, sizeof(mark), stdin);
    int id = atoi(mark);

    printf("\tenter new title for Todo:  ");
    fgets(todo, sizeof(todo), stdin);
    todo[strcspn(todo, "\n")] = '\0';

    sprintf(sql , "update Todos set Title='%s' where  Id=%d;", todo, id);

    int rc = sqlite3_exec(db , sql, 0, 0, &errMsg); // rc means return code
    if(rc != SQLITE_OK){
        fprintf(stderr , "Could not update Todo: %s\n", errMsg);
        sqlite3_free(errMsg);
        return ERROR;
    }
    return OK;
}
enum ERR listAll(sqlite3 *db){
sqlite3_stmt *stmt;
const char *sql = "select * from Todos;";
int rc  = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
if(rc != SQLITE_OK){
fprintf(stderr , "Could not read DB: %s\n", sqlite3_errmsg(db));
return ERROR;
}
printf("%-5s%-25s%s\n", "Id", "Todo", "Completed");
printf("------------------------------------------------\n");

while ((rc = sqlite3_step(stmt)) == SQLITE_ROW){
    int id = sqlite3_column_int(stmt, 0);
    char *todo = (char *)sqlite3_column_text(stmt, 1);
    if(!todo){
        todo = "NULL";
    }

    int completed = sqlite3_column_int(stmt,2);
    char *done = "done";
    if(!completed){
        done = "not";
    }
    printf("%-5d%-25s%s\n", id, todo, done);    
printf("------------------------------------------------\n");
}
return OK;
}

int numberTodos(sqlite3 *db){
    int count = 0;
    sqlite3_stmt *stmt;
    const char *sql ="select count(*) from Todos;";
    int rc = sqlite3_prepare_v2(db , sql , -1 , &stmt, NULL); // rc means return code
    if(rc != SQLITE_OK){
        fprintf(stderr, "Could not get count from db: %s\n", sqlite3_errmsg(db));
        return -1;
    }
    while((rc = sqlite3_step(stmt)) != SQLITE_DONE){
        count = sqlite3_column_int(stmt, 0);
    }
    return count;
}
int completedTodos(sqlite3 * db){
    int count = 0;
    sqlite3_stmt *stmt;
    const char *sql = "select * from Todos where Completed=1;";
    int rc =  sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);// rc means return code
    if(rc != SQLITE_OK){
        fprintf(stderr , "Could not get number of complete todos: %s\n", sqlite3_errmsg(db));
        return -1;
    }
    while((rc = sqlite3_step(stmt)) != SQLITE_DONE){
        count++;
    }
}