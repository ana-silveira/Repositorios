/* Fa�a um programa que leia 3 n�meros e imprima uma das seguintes
mensagens:Todos os n�meros s�o iguais,Todos os n�meros s�o diferentes ou Apenas
dois n�meros s�o iguais.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int a, b, c;

    printf("Insira o o primeiro n�mero: ");
    scanf("%d", &a);
    printf("Insira o o segundo n�mero: ");
    scanf("%d", &b);
    printf("Insira o o terceiro n�mero: ");
    scanf("%d", &c);

    if ((a == b ) && (a == c))
        puts("Todos os n�meros s�o iguais");
    else {
        if ((a == b ) || (a == c) || ( b == c))
            puts("Existem dois n�meros iguais");
            else {
                puts ("Todos os n�meros s�o diferentes");
            }
    }

    system("pause");
}
