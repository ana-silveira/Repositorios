/*
. Faça um programa que imprima o menu abaixo e exiba o estado civil informado. Exibir uma
mensagem de erro caso seja fornecida uma opção inválida.
| 1 – solteiro |
| 2 – separado |
| 3 – casado |
| 4 – divorciado |
| 5 – viúvo |
| Entre com a opção:
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int opc;

    printf("1 - solteiro \n");
    printf("2 - separado \n");
    printf("3 - casado \n");
    printf("4 - divorciado \n");
    printf("5 - viúvo \n");
    printf("Entre com a opção: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1: puts("Opção informada: Solteiro") ;
            break;
        case 2: puts("Opção informada: Separado") ;
            break;
        case 3: puts("Opção informada: Casado") ;
            break;
        case 4: puts("Opção informada: Divorciado") ;
            break;
        case 5: puts("Opção informada: Viúvo") ;
            break;
        default: puts(" Opção inválida; Insira valor de 1 a 5.");

    }

}
