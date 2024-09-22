#include <stdio.h>
#include <stdlib.h>

/*Time Complexity
Depth-First Search
Best Case:O(V+E)here V means vertices and E means edges
Average Case:O(V+E)here V means vertices and E means edges
Worst case:O(V+E)here V means vertices and E means edges
 */
//?Space complexity :O(|V|)

/*
Working of the Depth-First-Search
->it is an algorithm for traversing or searching tree or graph ata structures.The algorithm starts at the nodes and explores as far as possible along each branch before backtracking

APPLICATION AND BENEFITS
Graph Traversal:DFS efficiently traverses through a graph, visiting all vertices reachable from a given starting vertex.

Maze Solving:DFS can systematically search through a maze to find a path from the entrance to the exit.

Topological Sorting:DFS is used to perform topological sorting on directed acyclic graphs (DAGs), ordering vertices based on precedence relationships.

Cycle Detection:DFS detects cycles within graphs, identifying situations where a sequence of edges forms a closed loop.

Connected Components:DFS finds connected components in undirected graphs, grouping vertices that are mutually reachable.
*/

// Structure to represent a node in the adjacency list
typedef struct Node
{
    int vertex;
    struct Node *next;
} Node;

// Structure to represent a graph
typedef struct Graph
{
    int numVertices;
    int *visited;
    Node **adjLists;
} Graph;

// Function prototypes
Graph *createGraph(int);
void addEdge(Graph *, int, int);
void DFS(Graph *, int);
void dfsTraversal(Graph *, int);

// Main function
int main()
{
    int vertices = 6; // Number of vertices in the graph
    Graph *graph = createGraph(vertices);

    // Adding edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    printf("Depth First Search Traversal:\n");
    DFS(graph, 0);

    return 0;
}

// Function to create a graph with a given number of vertices
Graph *createGraph(int vertices)
{
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    graph->numVertices = vertices;
    graph->visited = (int *)malloc(vertices * sizeof(int));
    graph->adjLists = (Node **)malloc(vertices * sizeof(Node *));

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->visited[i] = 0;
        graph->adjLists[i] = NULL;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(Graph *graph, int src, int dest)
{
    // Adding edge from src to dest
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->vertex = dest;
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Adding edge from dest to src (for undirected graph)
    newNode = (Node *)malloc(sizeof(Node));
    newNode->vertex = src;
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// DFS traversal of the vertices reachable from v
void dfsTraversal(Graph *graph, int vertex)
{
    // Mark the current vertex as visited
    graph->visited[vertex] = 1;
    printf("Visited %d\n", vertex);

    // Traverse all the vertices adjacent to this vertex
    Node *temp = graph->adjLists[vertex];
    while (temp != NULL)
    {
        int adjVertex = temp->vertex;
        if (graph->visited[adjVertex] == 0)
        {
            dfsTraversal(graph, adjVertex);
        }
        temp = temp->next;
    }
}

// DFS traversal starting from a given vertex
void DFS(Graph *graph, int startVertex)
{
    dfsTraversal(graph, startVertex);
}
