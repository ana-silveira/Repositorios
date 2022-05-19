#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int num1, num2, soma;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 9) {
        printf("O resultado da soma dos números %d e %d é maior ou igual a 10.\n", num1, num2);
    }

    system("pause");
}
