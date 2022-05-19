/*22. Entrar com um número e informar se é divisível por 10, ou é divisível por 5, ou é
divisível por 2 ou se não é divisível por nenhum destes. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (num % 10 == 0 || num%5 == 0 || num % 2 == 0) {
            if (num % 10 == 0) {
                printf(" O número %d é divisível por 10.\n", num);
            } else {
                if (num % 5 == 0) {
                    printf("O número %d é divisível por 5.\n", num);
                } else {
                    if (num % 2 == 0) {
                        printf(" O número %d é divisível por 2.\n", num);
                        }
                    }
                }
    } else {
        printf("O número %d não é divisível por nenhum dos valores.\n", num);
        }


    printf("\n");

    system("pause");
}
