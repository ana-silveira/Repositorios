/*
Fa�a um programa que leia 3 n�meros e imprima uma mensagem dizendo se
correspondem aos lados de um tri�ngulo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    int a, b, c;

    printf("Insira o o primeiro n�mero: ");
    scanf("%d", &a);
    printf("Insira o o segundo n�mero: ");
    scanf("%d", &b);
    printf("Insira o o terceiro n�mero: ");
    scanf("%d", &c);

    if( ( a + b ) > c && ( a + c ) > b && ( b + c ) > a)
        printf("Os n�meros informados correspondem aos lados de um tri�ngulo. ");
    else {
        printf("Os n�meros informados N�O correspondem aos lados de um tri�ngulo. ");

    system("pause");
    }
}
