/*Fa�a um programa que leia um n�mero e imprima uma mensagem dizendo se � par
ou �mpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    system ("cls");

    int num;

    printf("Informe o valor desejado: ");
    scanf("%d", &num);

    if ( num % 2 == 0 ) {
        printf("O valor informado � um n�mero PAR. \n");
    } else {
        printf("O valor informado � um n�mero IMPAR. \n");
    }
    printf("\n");

    system("pause");
}
