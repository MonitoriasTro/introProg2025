#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    float nota1, nota2, nota3;
    float media_A, media_P;

    printf("Digite seu nome\n");
    gets(nome);

    printf("Digite suas tres notas\n");
    printf("1o nota:");
    scanf("%f", &nota1);
    printf("2o nota:");
    scanf("%f", &nota2);
    printf("3o nota:");
    scanf("%f", &nota3);

    media_A = (nota1 + nota2 + nota3) / 3;
    media_P = ((nota1 * 0.2) + (nota2 * 0.35) + (nota3 * 0.45));

    printf("Nome: %s \n", nome);
    printf("Media aritmetica: %.2f \nMédia ponderada: %.2f \n", media_A, media_P);
    return 0;
}
