/*
Faça um programa que leia dois números e imprima uma mensagem dizendo o maior
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

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o o segundo número: ");
    scanf("%d", &num2);

    if ( num1 > num2)
        printf(" O %d é o maior número. ", num1);
    else {
        printf(" O %d é o maior número. ", num2);

    }
    system("pause");
}
