/*
47. Faça um programa que leia 12 números e imprima a média destes números.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;
    int soma = 0;

    for ( int i = 1; i <= 12; i++) {
        printf("Informe o número %d: ", i);
        scanf("%d", &numero);

        soma = soma + numero ;

        }

    printf("O valor médio dos 12 números informados é %d \n ", soma/12 );

}
