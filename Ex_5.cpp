#include <stdio.h>
#include <stdlib.h>

int main(){
	 int linhas = 3, colunas = 3;

    // Aloca um vetor para simular uma matriz 3x3
    int *matriz = (int *)malloc(linhas * colunas * sizeof(int));
    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenche com 0 (opcional, pois malloc pode retornar lixo de memória)
    for (int i = 0; i < linhas * colunas; i++) {
        matriz[i] = 0;
    }

    // Imprime no formato de matriz
    printf("Matriz 3x3 preenchida com 0:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i * colunas + j]); // Acesso como matriz
        }
        printf("\n");
    }

    // Libera a memória
    free(matriz);
    
    getchar();
    return 0;
}
