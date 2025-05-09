#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3, num4;
    float contaA, contaB, contaC, contaD;

    printf("Digite 4 numeros para serem calculados:\n");
    printf("1o numero:");
    scanf("%f", &num1);
    printf("\n2o numero:");
    scanf("%f", &num2);
    printf("\n3o numero:");
    scanf("%f", &num3);
    printf("\n4o numero:");
    scanf("%f", &num4);

    contaA = num1 + num2 + num3 + num4;
    printf("%.2f + %.2f + %.2f + %.2f = %.2f\n", num1, num2, num3, num4, contaA);

    contaB = (num1 + num2) * (num3 + num4);
    printf("(%.2f + %.2f) * (%.2f + %.2f) = %.2f\n", num1, num2, num3, num4, contaB);

    contaC = ((num1 * num2) + num3) * num4;
    printf("((%.2f * %.2f) + %.2f) * %.2f = %.2f\n", num1, num2, num3, num4, contaC);

    contaD = (num1 * num2) / (num3 + num4);
    printf("(%.2f * %.2f) / (%.2f + %.2f) = %.2f\n", num1, num2, num3, num4, contaD);

    return 0;
}
