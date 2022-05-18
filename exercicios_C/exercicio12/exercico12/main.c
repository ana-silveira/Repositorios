/*Faça um programa para calcular o valor final da conta de um restaurante sabendo- se que deverá ser acrescida a conta 10%. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");
    float valor, valorFinal;
    printf("Informe o valor da conta (em R$): ");
    scanf("%f", &valor);

    valorFinal = valor + (valor * 10)/100 ;

    printf("O valor final da conta é R$ %.2f\n", valorFinal);


    system("pause");

}
