/*
Faça um programa que leia 3 números e os imprima em ordem decrescente
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

    if ( (a == b) || (a == c) || (b == c) ) {
          printf("Existem valores repetidos. Favor inserir 3 números diferentes.\n");
    } else {
        if( a < b) {
            if (a < c) {
                if (c < b) {
                    printf(" %d > %d > %d \n", b, c, a);
                    } else {
                        printf(" %d > %d > %d \n", c, b, a);
                        }
                } else {
                    printf("%d > %d > %d \n", b, a, c);
                    }
            } else {
                if( b < c ) {
                   printf(" %d > %d > %d \n ", a, c, b);
                } else {
                    printf(" %d > %d > %d \n ", a, b, c);
                   }
              }
    }
}




