/*
45. Faça um programa que leia dez números e imprima a metade de cada número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;

    for ( int i = 1; i <= 10; i++) {
        printf("Informe o número %d: ", i);
        scanf("%d", &numero);

        int metade = numero / 2.0 ;

        printf(" A metade do valor de %d é %d \n ", numero, metade);
    }


}
