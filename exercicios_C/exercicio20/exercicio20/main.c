/*
Entrar com um número e informar se ele é ou não divisível por 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf(" O número %d é divisível por 5.\n", num);
    }
    else {
        printf("O número %d NÃO é divisível por 5.\n", num);
    }

    printf("\n");

    system("pause");
}
