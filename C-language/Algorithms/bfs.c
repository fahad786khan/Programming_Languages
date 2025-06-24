#include <stdio.h>
#include <stdlib.h>
#define MAX 5

/*Graph Algorithms are a set of instructions used to solve problems related to graph theory,where data is represented as a collection of nodes connected by edges,like trees
 */
/*Time Complexity
Breadth-First Search
Best Case:O(V)
Average Case:O(V+E)here V means vertices and E means edges
Worst case:O(V+E)
 */
//?Space complexity :O(|V|)

/*
Working of the Breadth-First-Search
->it is a layer-by-layer approach,casting a wide net from your starting point and graduaily widening it
Initialization: Enqueue the starting node into a queue and mark it as visited.

Exploration: While the queue is not empty:
Dequeue a node from the queue and visit it (e.g., print its value).
For each unvisited neighbor of the dequeued node:
 Enqueue the neighbor into the queue.
 Mark the neighbor as visited.

Termination: Repeat step 2 until the queue is empty.

APPLICATION AND BENEFITS
Shortest Path Finding: BFS can be used to find the shortest path between two nodes in an unweighted graph. By keeping track of the parent of each node during the traversal,
the shortest path can be reconstructed.

Cycle Detection: BFS can be used to detect cycles in a graph. If a node is visited twice during the traversal, it indicates the presence of a cycle.

Connected Components: BFS can be used to identify connected components in a graph. Each connected component is a set of nodes that can be reached from each other.

Topological Sorting: BFS can be used to perform topological sorting on a directed acyclic graph (DAG).
Topological sorting arranges the nodes in a linear order such that for any edge (u, v), u appears before v in the order.

Level Order Traversal of Binary Trees: BFS can be used to perform a level order traversal of a binary tree.
This traversal visits all nodes at the same level before moving to the next level.

Network Routing: BFS can be used to find the shortest path between two nodes in a network, making it useful for routing data packets in network protocols.

Simplicity and Robustness:BFS is straightforward to implement and understand, making it a robust approach for exploring graphs or trees.

Guaranteed Shortest Path:For unweighted graphs, BFS guarantees the shortest path from the starting node to any other reachable node,
making it highly effective for solving shortest path problems.

Level-by-Level Exploration:BFS explores vertices level by level, which is particularly useful in applications where the structure or level of the nodes is important,
such as in hierarchical systems or organizational structures.

Good for Small to Medium-Sized Graphs:BFS is particularly effective and efficient for small to medium-sized graphs or parts of a graph due to its linear time complexity relative to the number of vertices and edges.
*/

// Define the structure for each vertex in the graph
typedef struct node
{
    int vertex;
    struct node *next;
} Node;

// Define the structure for the graph
typedef struct Graph
{
    int numVertices;
    Node **adjLists; // An array of pointers to Node
    int *visited;    // An array to keep track of visited vertices
} Graph;

// Function prototypes
Graph *createGraph(int);
void addEdge(Graph *, int, int);
void BFS(Graph *, int);
void enqueue(int);
int dequeue();
int isEmpty();

// Queue variables
int *queue;
int front = -1;
int rear = -1;

int main()
{
    //?Create a graph with 4 vertices
    Graph *graph = createGraph(4);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    printf("Starting BFS traversal from vertex 2:\n");
    BFS(graph, 2);

    return 0;
} /*
    Function: createGraph

    Creates a new graph with the specified number of vertices.

    Parameters:
      vertices - The number of vertices in the graph.

    Returns:
      Pointer to the newly created graph.
 */
Graph *createGraph(int vertices)
{
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    graph->numVertices = vertices;

    // Allocate memory for adjacency lists and visited array
    graph->adjLists = (Node **)malloc(vertices * sizeof(Node *));
    graph->visited = (int *)malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL; // Initialize adjacency lists to NULL
        graph->visited[i] = 0;     // Mark all vertices as not visited
    }

    // Allocate memory for the queue used in BFS
    queue = (int *)malloc(vertices * sizeof(int));

    return graph;
}

/*
   Function: addEdge

   Adds an edge between two vertices in the graph.

   Parameters:
     graph - Pointer to the graph.
     src - Source vertex of the edge.
     dest - Destination vertex of the edge.
*/
void addEdge(Graph *graph, int src, int dest)
{
    // Create a new node for the destination vertex
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->vertex = dest;
    newNode->next = graph->adjLists[src];

    // Update the adjacency list for the source vertex
    graph->adjLists[src] = newNode;
}

/*
   Function: BFS

   Performs Breadth First Search (BFS) traversal starting from the specified vertex.

   Parameters:
     graph - Pointer to the graph.
     startVertex - The vertex from which BFS traversal starts.
*/
void BFS(Graph *graph, int startVertex)
{
    graph->visited[startVertex] = 1; // Mark the start vertex as visited
    enqueue(startVertex);            // Enqueue the start vertex

    while (!isEmpty())
    {
        int currentVertex = dequeue();         // Dequeue a vertex from the queue
        printf("Visited %d\n", currentVertex); // Print the visited vertex

        Node *temp = graph->adjLists[currentVertex]; // Get the adjacency list of the current vertex

        //?Traverse the adjacency list of the current vertex
        while (temp)
        {
            int adjVertex = temp->vertex;

            // If the adjacent vertex is not visited, mark it as visited and enqueue it
            if (graph->visited[adjVertex] == 0)
            {
                graph->visited[adjVertex] = 1;
                enqueue(adjVertex);
            }
            temp = temp->next; // Move to the next adjacent vertex
        }
    }
}

/*
   Function: enqueue

   Adds a vertex to the end of the queue.

   Parameters:
     vertex - The vertex to be enqueued.
*/
void enqueue(int vertex)
{
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = vertex; // Add the vertex to the rear of the queue
}

/*
   Function: dequeue

   Removes and returns the vertex at the front of the queue.

   Returns:
     The dequeued vertex.
*/
int dequeue()
{
    int dequeuedElement = queue[front]; // Get the vertex at the front of the queue
    front++;
    if (front > rear)
    {
        front = rear = -1; // Reset front and rear when the queue becomes empty
    }
    return dequeuedElement;
}

/*
   Function: isEmpty

   Checks if the queue is empty.

   Returns:
     1 if the queue is empty, 0 otherwise.
*/
int isEmpty()
{
    if (front == -1)
    {
        return 1; // Queue is empty
    }
    else
    {
        return 0; // Queue is not empty
    }
}
