#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float num1, num2, num3, num4;
    float contaA, contaB, contaC, contaD;

    printf("Digite 4 n�meros para serem calculados:\n");

    printf("1� n�mero:");
    scanf("%f",&num1);

    printf("\n2� n�mero:");
    scanf("%f",&num2);


    printf("\n3� n�mero:");
    scanf("%f",&num3);


    printf("\n4� n�mero:");
    scanf("%f",&num4);

    contaA=num1+num2+num3+num4;
    printf("%.2f+%.2f+%.2f+%.2f = %.2f\n",num1,num2,num3,num4,contaA);

    contaB=(num1+num2)*(num3+num4);
    printf("(%.2f+%.2f)*(%.2f+%.2f) = %.2f\n",num1,num2,num3,num4,contaB);

    contaC=((num1*num2)+num3)*num4;
    printf("((%.2f*%.2f)+%.2f)*%.2f = %.2f\n",num1,num2,num3,num4,contaC);

    contaD=(num1*num2)/(num3+num4);
    printf("(%.2f*%.2f)/(%.2f+%.2f) = %.2f\n",num1,num2,num3,num4,contaD);


    return 0;
}
