#include <stdio.h>
#include <stdlib.h>

int main() {
    char motorista1[20];
    char motorista2[20];
    float d_inic1, d_fim1, d_inic2, d_fim2;
    float d_percorrida1, d_percorrida2, d_total;

    printf("Nome do 1o motorista:\n");
    gets(motorista1);

    printf("Quilometragem \nInicial:");
    scanf("%f", &d_inic1);

    printf("\nFinal:");
    scanf("%f", &d_fim1);

    d_percorrida1 = d_fim1 - d_inic1;

    printf("Nome do 2o motorista:\n");
    gets(motorista2);

    printf("Quilometragem \nInicial:");
    scanf("%f", &d_inic2);

    printf("\nFinal:");
    scanf("%f", &d_fim2);

    d_percorrida2 = d_fim2 - d_inic2;

    d_total = d_percorrida1 + d_percorrida2;

    printf("Motorista: %s\n", motorista1);
    printf("Quilometragem: \nInicial: %.2f km \nFinal: %.2f km\n", d_inic1, d_fim1);
    printf("Distancia percorrida: %.2f quilometros\n", d_percorrida1);

    printf("Motorista: %s\n", motorista2);
    printf("Quilometragem: \nInicial: %.2f km \nFinal: %.2f km\n", d_inic2, d_fim2);
    printf("Distancia percorrida: %.2f quilometros\n", d_percorrida2);

    printf("\n\nDistancia total percorrida pelos dos motoristas: %.2f km\n", d_total);
    return 0;
}
