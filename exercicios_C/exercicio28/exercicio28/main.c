/*
Fa�a um programa que leia 3 n�meros e imprima o menor deles.
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

    if( a < b) {
        if (a < c) {
            printf(" %d � o menor n�mero.\n", a);
        } else {
            printf(" %d � o menor n�mero.\n", c);
        }
    } else {
        if( b < c ) {
        printf(" %d � o menor n�mero.\n", b);
        } else {
            printf(" %d � o menor n�mero.\n", c);
         }
    }

    system("pause");
}
