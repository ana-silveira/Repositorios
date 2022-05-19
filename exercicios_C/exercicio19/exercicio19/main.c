/*Faça um programa que leia um número e imprima uma mensagem dizendo se é par
ou ímpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    system ("cls");

    int num;

    printf("Informe o valor desejado: ");
    scanf("%d", &num);

    if ( num % 2 == 0 ) {
        printf("O valor informado é um número PAR. \n");
    } else {
        printf("O valor informado é um número IMPAR. \n");
    }
    printf("\n");

    system("pause");
}
