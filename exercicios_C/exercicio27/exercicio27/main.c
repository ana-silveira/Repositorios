/*
27. Fa�a um programa que leia dois n�meros e os imprima em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    int num1, num2;

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Insira o o segundo n�mero: ");
    scanf("%d", &num2);

    if ( num1 > num2)
        printf(" %d > %d \n", num1, num2);
    else {
        printf(" %d > %d \n", num2, num1);

    }
    system("pause");
}

