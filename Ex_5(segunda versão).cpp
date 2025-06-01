#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3, colunas = 3;

    // Aloca dinamicamente um vetor com 9 inteiros
    int *matriz = malloc(linhas * colunas * sizeof(int));
    if (matriz == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Lê os valores da matriz fornecidos pelo usuário
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i * colunas + j]);
        }
    }

    // Imprime no formato de matriz
    printf("\nMatriz digitada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i * colunas + j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}
