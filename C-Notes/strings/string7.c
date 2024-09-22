#include<stdio.h>
#include<string.h>

/*  Standard Library Function
            |
        <string.h>
        
| Function Name           | Function Description                                                                                               |
| ----------------------- | ------------------------------------------------------------------------------------------------------------------ |
| strlen(str)             | Returns the length of the string/count number of characters excluding '\0'                                         |
| strcpy(newStr,oldStr)   | Copy one string to another/copies value of old string to new string                                                |
| strcmp(firstStr,secStr) | Compares 2 string & returns a value.(~remember that one space should be empty in first str so next string can add) |
| strcat(firstStr,secStr) | Concatenates first string with second string                                                                       |
 0 -> string equal
 positive -> first > second (ASCII)
 negative -> first < second (ASCII)
*/

int main (){
    // char name[] = "aman"; //1
    // int length = strlen(name);//this is used to convert unsigned long string to int
    // printf("length is : %d \n",length);
    
    // char oldStr[] = "oldStr"; //2
    // char newStr[] = "newStr";
    // strcpy(newStr,oldStr);
    // puts(newStr);

    // char firstStr[100] = "hello";//3
    // char secString[] = "world";
    // strcat(firstStr,secString);
    // puts(firstStr);

    char firstStr[] = "Apple";//4
    char secStr[] = "Banana" ;
    printf("%d \n", strcmp(secStr,secStr));
    return 0;
}