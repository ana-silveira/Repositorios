/*Faça um programa que solicite o número do mês e exiba o mês por extenso. Criticar o valor
fornecido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int opc;

    printf("Entre com o número do mês desejado: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1: puts("Mês selecionado: 1 - Janeiro \n") ;
            break;
        case 2: puts("Mês selecionado: 2 - Fevereiro \n") ;
            break;
        case 3: puts("Mês selecionado: 3 - Março \n") ;
            break;
        case 4: puts("Mês selecionado: 4 - Abril \n") ;
            break;
        case 5: puts("Mês selecionado: 5 - Maio \n") ;
            break;
        case 6: puts("Mês selecionado: 6 - Junho \n") ;
            break;
        case 7: puts("Mês selecionado: 7 - Julho \n") ;
            break;
        case 8: puts("Mês selecionado: 8 - Agosto \n") ;
            break;
        case 9: puts("Mês selecionado: 9 - Setembro \n") ;
            break;
        case 10: puts("Mês selecionado: 10 - Outubro \n") ;
            break;
        case 11: puts("Mês selecionado: 11 - Novembro \n") ;
            break;
        case 12: puts("Mês selecionado: 12 - Dezembro \n") ;
            break;

        default: puts(" Opção inválida; Insira valor de 1 a 12.");

    }

}
