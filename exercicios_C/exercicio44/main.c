/*
44. Faça um programa que leia um número da entrada e imprima os números de 0 até
o número lido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Informe o número desejado: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
        {
         printf("%d\n", i);
        }
    system("pause");

}
