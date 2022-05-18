/* Fa�a um programa para efetuar o calculo de uma presta��o em atraso, utilizando a
f�rmula: presta��o = valor + (valor * (taxa / 100) * tempo ), onde os dados valor
(real), taxa (real) e tempo (int) devem ser lidos */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    float valor, taxa, prestacao;
    int tempo;

    printf("Vamos calcular o valor da presta��o em atraso: \n");
    printf("\n");

    printf("Informe o valor original da presta��o (em R$): ");
    scanf("%f", &valor);

    printf("Informe o valor da taxa: ");
    scanf("%f", &taxa);

    printf("Informe o n�mero de dias em atraso: ");
    scanf("%d", &tempo);

    prestacao = valor + (valor * (taxa/100)*tempo) ;

    printf("\n");

    printf("==============================================\n");

    printf("O valor a ser pago (em R$)  �:  %.2f \n", prestacao);

    printf("\n");


    system("pause");
}
