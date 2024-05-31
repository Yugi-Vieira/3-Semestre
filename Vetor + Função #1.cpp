#include <stdio.h>

int leValores(int vetor[20]) {
    for (int i = 0; i < 20; i++) {
        printf("Digite um valor inteiro: ");
        fflush(stdin); scanf("%i", &vetor[i]);
    }
}

int maiorValor(int vetor[20]) {
    int maior = vetor[0];
    for (int i = 1; i < 20; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

main() {
    int vetor[20];
    leValores(vetor);
    int maior = maiorValor(vetor);
    printf("O maior valor informado foi %i\n", maior);
}