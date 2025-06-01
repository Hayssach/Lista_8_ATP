#include <stdio.h>
#include <stdlib.h>

// Função que filtra os pares de V e retorna um novo vetor S
int* filtrar_pares(int *V, int n, int *tam_s) {
    int *S = NULL;
    *tam_s = 0;

    for (int i = 0; i < n; i++) {
        if (V[i] % 2 == 0) {
            // Realoca S para comportar mais um número par
            int *temp = realloc(S, (*tam_s + 1) * sizeof(int));
            if (temp == NULL) {
                printf("Erro de alocação de memória.\n");
                free(S);
                return NULL;
            }
            S = temp;
            S[*tam_s] = V[i];
            (*tam_s)++;
        }
    }

    return S;
}

int main() {
    int n;

    // Leitura do tamanho do vetor
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);

    // Alocação do vetor original
    int *V = malloc(n * sizeof(int));
    if (V == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    // Leitura dos elementos do vetor
    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    // Filtra os pares
    int tam_s;
    int *S = filtrar_pares(V, n, &tam_s);

    // Mostra o vetor de pares
    printf("\nElementos pares:\n");
    for (int i = 0; i < tam_s; i++) {
        printf("%d ", S[i]);
    }
    printf("\n");

    // Libera a memória
    free(V);
    free(S);
    
    getchar();
    return 0;
}
