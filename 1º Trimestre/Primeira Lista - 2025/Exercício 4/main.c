#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    float s_bruto, s_liquido, s_extra, inss, transporte, extra;

    printf("Digite seu nome\n");
    gets(nome);

    printf("Digite seu salario bruto\n");
    scanf("%f", &s_bruto);

    inss = s_bruto * 0.115;

    transporte = s_bruto * 0.06;
    
    extra = s_bruto * 0.05;
    
    s_liquido = s_bruto - inss - transporte;

    s_extra = s_liquido + extra;

    printf("Nome:%s\nSalario Bruto: R$ %.2f\n", nome, s_bruto);
    printf("Salario Liquido: R$ %.2f\nSe receber extra: R$ %.2f", s_liquido, s_extra);

    return 0;
}
