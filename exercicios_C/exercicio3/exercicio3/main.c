/*Faça um programa que leia dois números de entrada e imprima o seu produto */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float prod;

    printf("Insira valor 1: ");
    scanf("%i", &num1);
    printf("Insira valor 2: ");
    scanf("%i", &num2);

    prod = num1 * num2;

    printf("Valor do produto: %.1f", prod);
}
