/* Faça um programa que leia 3 números e imprima uma das seguintes
mensagens:Todos os números são iguais,Todos os números são diferentes ou Apenas
dois números são iguais.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int a, b, c;

    printf("Insira o o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o o segundo número: ");
    scanf("%d", &b);
    printf("Insira o o terceiro número: ");
    scanf("%d", &c);

    if ((a == b ) && (a == c))
        puts("Todos os números são iguais");
    else {
        if ((a == b ) || (a == c) || ( b == c))
            puts("Existem dois números iguais");
            else {
                puts ("Todos os números são diferentes");
            }
    }

    system("pause");
}
