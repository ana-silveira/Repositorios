/* Faça um programa que leia três números e imprima o valor intermediário entre o
menor e o maior valor. Suponha que os valores sejam diferentes.*/

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

    if ( (a == b) || (a == c) || (b == c) ) {
          printf("Existem valores repetidos. Favor inserir 3 números diferentes.\n");
    } else {


        if( a < b) {
            if (a < c) {
                if (c < b) {
                    printf(" O valor intermediário dentre os informados é %d \n", c);
                    } else {
                        printf(" O valor intermediário dentre os informados é %d \n", b);
                        }
                } else {
                    printf(" O valor intermediário dentre os informados é %d \n", a);
                    }
            } else {
                if( b < c ) {
                   printf(" O valor intermediário dentre os informados é %d \n", c);
                } else {
                    printf(" O valor intermediário dentre os informados é %d \n", b);
                   }
              }


    }
}
