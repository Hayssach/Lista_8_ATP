#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite quantos n�meros deseja armazenar: ");
    scanf("%d", &n);

    // Aloca dinamicamente um vetor de inteiros com n posi��es
    int *vetor = (int *)malloc(n * sizeof(int));

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // Solicita ao usu�rio que insira os valores
    printf("Digite %d n�meros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("N�mero %d: ", i + 1);
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
