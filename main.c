#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um nó na lista de adjacência
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

// Estrutura para representar uma lista de adjacência
typedef struct AdjList {
    Node* head;
} AdjList;

// Estrutura para representar um grafo
typedef struct Graph {
    int numVertices;
    AdjList* array;
} Graph;

// Função para criar um novo nó de lista de adjacência
Node* createNode(int vertex) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

// Função para criar um grafo com um número de vértices
Graph* createGraph(int numVertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = numVertices;

    // Criar uma matriz de listas de adjacência. O tamanho da matriz é igual ao número de vértices
    graph->array = (AdjList*)malloc(numVertices * sizeof(AdjList));

    // Inicializa cada lista de adjacência como vazia definindo a cabeça da lista como NULL
    for (int i = 0; i < numVertices; i++)
        graph->array[i].head = NULL;

    return graph;
}

// Função para adicionar uma aresta ao grafo não-direcionado
void addEdge(Graph* graph, int src, int dest) {
    // Adiciona uma aresta da origem ao destino
    Node* newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // Como o grafo é não-direcionado, adiciona uma aresta do destino à origem também
    newNode = createNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Função para imprimir o grafo
void printGraph(Graph* graph) {
    for (int v = 0; v < graph->numVertices; v++) {
        Node* temp = graph->array[v].head;
        printf("\n Lista de adjacência do vértice %d\n head ", v);
        while (temp) {
            printf("-> %d", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Função principal
int main() {
    int numVertices = 5;
    Graph* graph = createGraph(numVertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);

    return 0;
}
