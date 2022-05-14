/*Faça um programa que leia dois números de entrada e imprima o resto da divisão
inteira de um pelo outro.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int resto;

    printf("Insira o primeiro valor: ");
    scanf("%i", &num1);
    printf("Insira o segundo valor: ");
    scanf("%i", &num2);

    resto = num1 % num2;

    printf("O resto da divisao inteira de um valor pelo outro eh %i ", resto);


    return 0;
}
