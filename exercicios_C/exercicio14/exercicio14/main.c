/* Fa�a um programa que apresente a convers�o de d�lar para real sendo passados os
valores reais e a taxa de convers�o. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    float dolar, taxa, real;

    printf("Informe o valor (em d�lar) que deseja converter: ");
    scanf("%f", &dolar);

    printf("Informe o valor da taxa de convers�o: ");
    scanf("%f", &taxa);

    real = dolar * taxa;

    printf("\n");
    printf("========================================\n");
    printf("O valor da convers�o de %.2f dolares a uma taxa de %.2f corresponde a %.2f reais.\n", dolar, taxa, real);

    system("pause");


}
