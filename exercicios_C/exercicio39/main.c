/*
. Fa�a um programa que imprima o menu abaixo e exiba o estado civil informado. Exibir uma
mensagem de erro caso seja fornecida uma op��o inv�lida.
| 1 � solteiro |
| 2 � separado |
| 3 � casado |
| 4 � divorciado |
| 5 � vi�vo |
| Entre com a op��o:
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
    printf("5 - vi�vo \n");
    printf("Entre com a op��o: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1: puts("Op��o informada: Solteiro") ;
            break;
        case 2: puts("Op��o informada: Separado") ;
            break;
        case 3: puts("Op��o informada: Casado") ;
            break;
        case 4: puts("Op��o informada: Divorciado") ;
            break;
        case 5: puts("Op��o informada: Vi�vo") ;
            break;
        default: puts(" Op��o inv�lida; Insira valor de 1 a 5.");

    }

}
