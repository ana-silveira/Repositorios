/*
Fa�a um programa que leia dois n�meros e imprima uma mensagem dizendo o maior
deles.
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
        printf(" O %d � o maior n�mero. ", num1);
    else {
        printf(" O %d � o maior n�mero. ", num2);

    }
    system("pause");
}
