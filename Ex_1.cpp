#include <stdio.h>
#include <stdlib.h>

int main(){
	 int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Aloca dinamicamente um vetor de inteiros com n posi��es
    int *vetor = (int *)malloc(n * sizeof(int));

    // Verifica se a aloca��o foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro de aloca��o de mem�ria.\n");
        return 1;
    }

    // Preenche o vetor com valores sequenciais
    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }

    // Imprime o vetor
    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a mem�ria alocada
    free(vetor);
    getchar();
    return 0;
}
