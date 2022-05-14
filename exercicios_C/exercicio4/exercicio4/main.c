/* Faça um programa que leia dois números de entrada e imprima a sua média
aritmética.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    float media;

    printf("Insira o valor 1: ");
    scanf("%f", &num1);
    printf("Insira o valor 2: ");
    scanf("%f", &num2);
    media = (num1 + num2) / 2;
    printf("A media dos valores eh %.1f ", media);

    return 0;
}
