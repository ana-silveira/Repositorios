/*Fa�a um programa que leia dois n�meros e imprima uma mensagem dizendo se s�o
iguais ou diferentes */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf( "Os n�meros %d e %d s�o IGUAIS.\n", num1, num2);
    } else {
        printf( "Os n�meros %d e %d s�o DIFERENTES.\n", num1, num2);
    }

        system("pause");

}
