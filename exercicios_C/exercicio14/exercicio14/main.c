/* Faça um programa que apresente a conversão de dólar para real sendo passados os
valores reais e a taxa de conversão. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    float dolar, taxa, real;

    printf("Informe o valor (em dólar) que deseja converter: ");
    scanf("%f", &dolar);

    printf("Informe o valor da taxa de conversão: ");
    scanf("%f", &taxa);

    real = dolar * taxa;

    printf("\n");
    printf("========================================\n");
    printf("O valor da conversão de %.2f dolares a uma taxa de %.2f corresponde a %.2f reais.\n", dolar, taxa, real);

    system("pause");


}
