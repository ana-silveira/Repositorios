/*Fa�a um programa que solicite o n�mero do m�s e exiba o m�s por extenso. Criticar o valor
fornecido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int opc;

    printf("Entre com o n�mero do m�s desejado: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1: puts("M�s selecionado: 1 - Janeiro \n") ;
            break;
        case 2: puts("M�s selecionado: 2 - Fevereiro \n") ;
            break;
        case 3: puts("M�s selecionado: 3 - Mar�o \n") ;
            break;
        case 4: puts("M�s selecionado: 4 - Abril \n") ;
            break;
        case 5: puts("M�s selecionado: 5 - Maio \n") ;
            break;
        case 6: puts("M�s selecionado: 6 - Junho \n") ;
            break;
        case 7: puts("M�s selecionado: 7 - Julho \n") ;
            break;
        case 8: puts("M�s selecionado: 8 - Agosto \n") ;
            break;
        case 9: puts("M�s selecionado: 9 - Setembro \n") ;
            break;
        case 10: puts("M�s selecionado: 10 - Outubro \n") ;
            break;
        case 11: puts("M�s selecionado: 11 - Novembro \n") ;
            break;
        case 12: puts("M�s selecionado: 12 - Dezembro \n") ;
            break;

        default: puts(" Op��o inv�lida; Insira valor de 1 a 12.");

    }

}
