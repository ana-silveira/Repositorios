/*
Faça um programa que leia 3 números e imprima o menor deles.
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

    if( a < b) {
        if (a < c) {
            printf(" %d é o menor número.\n", a);
        } else {
            printf(" %d é o menor número.\n", c);
        }
    } else {
        if( b < c ) {
        printf(" %d é o menor número.\n", b);
        } else {
            printf(" %d é o menor número.\n", c);
         }
    }

    system("pause");
}
