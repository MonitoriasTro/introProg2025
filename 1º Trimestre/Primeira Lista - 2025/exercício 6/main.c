#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

   char nome[20];
   float n1, n2, n3, n4, n5;
   float media;

   printf("Digite seu nome:\n");
   gets(nome);

   printf("1� nota:\n");
   scanf("%f",&n1);

   printf("2� nota:\n");
   scanf("%f",&n2);

   printf("3� nota:\n");
   scanf("%f",&n3);

   printf("4� nota:\n");
   scanf("%f",&n4);

   printf("5� nota:\n");
   scanf("%f",&n5);

   media=(n1+n2+n3+n4+n5)/5;

   printf("Nome:%s\n",nome);
   printf("M�dia das notas do aluno: %.2f",media);
    return 0;
}
