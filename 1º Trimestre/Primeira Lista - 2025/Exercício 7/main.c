#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, altura, volume;

    printf("Para calcular o volume de uma lata de oleo cilindrica entre com os dados abaixo:\n");

    printf("Raio:\n");
    scanf("%f", &raio);

    printf("Altura:\n");
    scanf("%f", &altura);

    volume = 3.14159 * (raio*raio) * altura;

    printf("Volume da lata: %.2f", volume);
    return 0;
}
