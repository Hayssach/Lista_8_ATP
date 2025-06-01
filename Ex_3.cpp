#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL; // Ponteiro para o vetor
    int tamanho = 0; // Quantidade atual de elementos
    int valor;

    printf("Digite n�meros inteiros (digite -1 para encerrar):\n");

    while (1) {
        printf("N�mero %d: ", tamanho + 1);
        scanf("%d", &valor);

        if (valor == -1) {
            break; // Encerra o loop se o usu�rio digitar -1
        }

        // Realoca o vetor para comportar mais um elemento
        int *temp = realloc(vetor, (tamanho + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao alocar mem�ria.\n");
            free(vetor);
            return 1;
        }

        vetor = temp;
        vetor[tamanho] = valor;
        tamanho++;
    }

    // Imprime os valores armazenados
    printf("\nValores armazenados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a mem�ria alocada
    free(vetor);
    
    getchar();
    return 0;
}
	

