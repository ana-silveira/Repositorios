/*22. Entrar com um n�mero e informar se � divis�vel por 10, ou � divis�vel por 5, ou �
divis�vel por 2 ou se n�o � divis�vel por nenhum destes. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    int num;

    printf("Informe um n�mero: ");
    scanf("%d", &num);

    if (num % 10 == 0 || num%5 == 0 || num % 2 == 0) {
            if (num % 10 == 0) {
                printf(" O n�mero %d � divis�vel por 10.\n", num);
            } else {
                if (num % 5 == 0) {
                    printf("O n�mero %d � divis�vel por 5.\n", num);
                } else {
                    if (num % 2 == 0) {
                        printf(" O n�mero %d � divis�vel por 2.\n", num);
                        }
                    }
                }
    } else {
        printf("O n�mero %d n�o � divis�vel por nenhum dos valores.\n", num);
        }


    printf("\n");

    system("pause");
}
