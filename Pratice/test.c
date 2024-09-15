#include <stdio.h>
#define MAX_NODES 10

char nodes[MAX_NODES] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

int N, M;
void createAdjMatrix(int Adj[][N + 1], int arr[][2]) {
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            Adj[i][j] = 0;
        }
    }

    for (int i = 0; i < M; i++) {
        int x = arr[i][0];
        int y = arr[i][1];

        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }
}

void printAdjMatrix(int Adj[][N + 1]) {
    printf("  ");
    for (int i = 1; i < N + 1; i++) {
        printf("%c ", nodes[i-1]);
    }
    printf("\n");

    for (int i = 1; i < N + 1; i++) {
        printf("%c ", nodes[i-1]);
        for (int j = 1; j < N + 1; j++) {
            printf("%d ", Adj[i][j]);
        }
        printf("\n");
    }
}

// Driver Code
int main() {
    // Number of vertices
    N = 10;

    // Given Edges
    int arr[][2] = {
        {1,8}, {1,10}, {2,10}, {3,4}, {4,5}, {4,10},
        {6,7}, {6,9}, {6,10}, {7,9}, {8,9}, {9,10}
    };

    // Number of Edges
    M = sizeof(arr) / sizeof(arr[0]);

    // For Adjacency Matrix
    int Adj[N + 1][N + 1];

    // Function call to create
    // Adjacency Matrix
    createAdjMatrix(Adj, arr);

    // Print Adjacency Matrix
    printAdjMatrix(Adj);

    return 0;
}