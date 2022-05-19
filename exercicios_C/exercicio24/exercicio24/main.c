/*
Faça um programa que leia 3 números e imprima uma mensagem dizendo se
correspondem aos lados de um triângulo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    int a, b, c;

    printf("Insira o o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o o segundo número: ");
    scanf("%d", &b);
    printf("Insira o o terceiro número: ");
    scanf("%d", &c);

    if( ( a + b ) > c && ( a + c ) > b && ( b + c ) > a)
        printf("Os números informados correspondem aos lados de um triângulo. ");
    else {
        printf("Os números informados NÃO correspondem aos lados de um triângulo. ");

    system("pause");
    }
}
