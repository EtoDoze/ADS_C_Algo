#include <stdio.h>

int main() {
    int A[4][4], B[4][4], S[4][4];

    // Leitura da primeira matriz
    printf("Digite os elementos da matriz A (4x4):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Leitura da segunda matriz
    printf("Digite os elementos da matriz B (4x4):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Soma das matrizes
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    // Impressão da matriz soma
    printf("\nMatriz soma:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", S[i][j]);
        }
        printf("\n");
    }

    return 0;
}