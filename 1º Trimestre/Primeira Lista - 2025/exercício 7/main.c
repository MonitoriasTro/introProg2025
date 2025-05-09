#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

   float raio, altura, volume;

   printf("Para calcular o volume de uma lata de óleo cilíndrica entre com os dados abaixo:\n");

   printf("Raio:\n");
   scanf("%f",&raio);

   printf("Altura:\n");
   scanf("%f",&altura);

   volume=3.14159*(raio*raio)*altura;

   printf("O volume da lata é: %.2f",volume);
    return 0;
}
