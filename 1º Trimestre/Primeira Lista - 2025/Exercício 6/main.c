#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[20];
    float n1, n2, n3, n4, n5;
    float media;

    printf("Digite seu nome:\n");
    gets(nome);

    printf("1o nota:\n");
    scanf("%f", &n1);

    printf("2o nota:\n");
    scanf("%f", &n2);

    printf("3o nota:\n");
    scanf("%f", &n3);

    printf("4o nota:\n");
    scanf("%f", &n4);

    printf("5o nota:\n");
    scanf("%f", &n5);

    media = (n1 + n2 + n3 + n4 + n5) / 5;

    printf("Nome: %s\n", nome);
    printf("Media das notas do aluno: %.2f", media);
    return 0;
}
