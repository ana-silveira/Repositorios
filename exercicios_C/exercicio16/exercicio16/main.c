/*Faça um programa que leia dois números e imprima uma mensagem dizendo se são
iguais ou diferentes */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf( "Os números %d e %d são IGUAIS.\n", num1, num2);
    } else {
        printf( "Os números %d e %d são DIFERENTES.\n", num1, num2);
    }

        system("pause");

}
