/*
29. Fa�a um programa que leia 3 n�meros e os imprima em ordem crescente.
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

    if ( (a == b) || (a == c) || (b == c) ) {
          printf(" Existem valores repetidos. Favor inserir 3 n�meros diferentes.\n");
    } else {
        if( a < b) {
            if (a < c) {
                if (c < b) {
                    printf(" %d < %d < %d \n", a, c, b);
                    } else {
                        printf(" %d < %d < %d \n", a, b, c);
                        }
                } else {
                    printf("%d < %d < %d \n", c, a, b);
                    }
            } else {
                if( b < c ) {
                   printf(" %d < %d < %d \n ", b, c, a);
                } else {
                    printf(" %d < %d < %d \n ", c, b, a);
                   }
              }
    }
}





