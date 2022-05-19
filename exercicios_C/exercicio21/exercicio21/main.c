/*
Entrar com um número e informar se é ou não divisível por 3 e por 7.
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

    if (num % 3 == 0 && num % 7 == 0) {
        printf(" O número %d é divisível por 3 e por 7.\n", num);

    } else {
        printf("O número %d NÃO é divisível por 3 e por 7.\n", num);
    }

    printf("\n");

    system("pause");
}
