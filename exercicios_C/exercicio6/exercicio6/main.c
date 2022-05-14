/*Faça um programa que leia um número de entrada e imprima o seu antecessor e o
seu sucessor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada, ant, suc;
    printf("Insira um valor: ");
    scanf("%i", &entrada);

    ant = entrada - 1;
    suc = entrada + 1;

    printf("O antecessor de %i eh %i, e o seu sucessor eh %i . ", entrada, ant, suc);
    return 0;
}
