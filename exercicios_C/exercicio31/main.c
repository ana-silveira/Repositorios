/* Fa�a um programa que leia tr�s n�meros e imprima o valor intermedi�rio entre o
menor e o maior valor. Suponha que os valores sejam diferentes.*/

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

    if ( (a == b) || (a == c) || (b == c) ) {
          printf("Existem valores repetidos. Favor inserir 3 n�meros diferentes.\n");
    } else {


        if( a < b) {
            if (a < c) {
                if (c < b) {
                    printf(" O valor intermedi�rio dentre os informados � %d \n", c);
                    } else {
                        printf(" O valor intermedi�rio dentre os informados � %d \n", b);
                        }
                } else {
                    printf(" O valor intermedi�rio dentre os informados � %d \n", a);
                    }
            } else {
                if( b < c ) {
                   printf(" O valor intermedi�rio dentre os informados � %d \n", c);
                } else {
                    printf(" O valor intermedi�rio dentre os informados � %d \n", b);
                   }
              }


    }
}
