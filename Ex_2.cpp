#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite quantos números deseja armazenar: ");
    scanf("%d", &n);

    // Aloca dinamicamente um vetor de inteiros com n posições
    int *vetor = (int *)malloc(n * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Solicita ao usuário que insira os valores
    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibe os valores armazenados
    printf("Valores armazenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    
    getchar();
    return 0;
}
