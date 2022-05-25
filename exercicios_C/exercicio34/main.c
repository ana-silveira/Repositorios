/* Faça um programa que leia a idade de uma pessoa e informe a sua classe eleitoral:
não eleitor (abaixo de 16 anos), eleitor obrigatório (entre 18 e 65 anos) ou eleitor
facultativo (entre 16 e 18 anos e acima dos 65 anos). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    system("cls");

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if ( (idade >= 65) || ((idade < 18) && (idade >= 16)) ) {
        puts("Eleitor facultativo. \n");
    } else {
        if (idade < 16) {
            puts("Não eleitor. \n");
            } else {
                    puts("Eleitor obrigatório. ");
                   }
        }

        system("pause");
}
