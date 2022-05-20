/*
27. Faça um programa que leia dois números e os imprima em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o o segundo número: ");
    scanf("%d", &num2);

    if ( num1 > num2)
        printf(" %d > %d \n", num1, num2);
    else {
        printf(" %d > %d \n", num2, num1);

    }
    system("pause");
}

