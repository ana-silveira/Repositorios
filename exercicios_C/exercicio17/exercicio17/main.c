/*
17. Fa�a um programa que receba um n�mero e informe se est� entre 10 e 20.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int num1, num2;

    printf("Informe o valor: ");
    scanf("%d", &num1);

    if ( num1 > 10 && num1 < 20 ) {
        printf(" O valor informado est� DENTRO do intervalo entre 10 e 20.\n");
    } else {
        printf(" O valor informado est� FORA do intervalo entre 10 e 20.\n");
    }
    printf("\n");

    system("pause");
}
