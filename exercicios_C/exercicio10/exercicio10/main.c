#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    int a, b, aux;

    printf("Insira o valor A: ");
    scanf("%d", &a);
    printf("Insira o valor B: ");
    scanf("%d", &b);
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    aux = a;
    a = b;
    b = aux;

    printf("Valor de A após a troca: %d\n", a );
    printf("Valor de B após a troca: %d\n", b );

    system("pause");
}
