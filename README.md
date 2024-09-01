# Explicação

- **Node**: Um nó que contém um `vertex` (vértice) e um ponteiro `next` para o próximo nó na lista de adjacência.
- **AdjList**: Uma estrutura que contém um ponteiro para a cabeça de um `Node`.
- **Graph**: A estrutura principal que contém um inteiro `numVertices` (número de vértices) e uma matriz de `AdjList` (listas de adjacência).
- **createNode**: Cria um novo nó na lista de adjacência.
- **createGraph**: Inicializa um grafo com o número de vértices especificado.
- **addEdge**: Adiciona uma aresta não direcionada entre dois vértices.
- **printGraph**: Imprime o grafo na forma de listas de adjacência.

### Como Usar

1. **Compilação**: Para compilar este programa, salve-o em um arquivo, por exemplo, `graph.c`, e execute o comando:
   ```
   gcc graph.c -o graph
   ```

2. **Execução**: Para executar o programa compilado:
   ```
   ./graph
   ```

Isso imprimirá as listas de adjacência para cada vértice no grafo. Essa é uma base para a implementação de grafos em C, e você pode estender isso para incluir operações como busca em profundidade (DFS), busca em largura (BFS), e algoritmos de caminho mínimo, como Dijkstra.