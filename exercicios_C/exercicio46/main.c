/*
46. Faça um programa que leia 20 número e exiba a soma destes números.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;
    int soma = 0;

    for ( int i = 1; i <= 20; i++) {
        printf("Informe o número %d: ", i);
        scanf("%d", &numero);

        soma = soma + numero ;

        printf("O valor das soma dos números até o termo %d é %d \n\n ", i, soma);
    }

    printf("O valor da soma dos 20 números é %d \n\n ", soma);


}
