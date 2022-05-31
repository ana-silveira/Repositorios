/*
43. Faça um programa que imprima os números de 1 a 30.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");

  /*  for (int i = 1; i <=30; i++){
            if ( i % 2 = 0)
                printf("%d\n", i);
            else {
                continue;
            }
    */

    int i = 1;

    while ( (i % 2 = 0) &&  (i<=30) ) {
        printf("%d\n", i);
        i++
    }

        system("pause");
}
