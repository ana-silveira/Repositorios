/*
Entrar com um n�mero e informar se ele � ou n�o divis�vel por 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int num;

    printf("Informe um n�mero: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf(" O n�mero %d � divis�vel por 5.\n", num);
    }
    else {
        printf("O n�mero %d N�O � divis�vel por 5.\n", num);
    }

    printf("\n");

    system("pause");
}
