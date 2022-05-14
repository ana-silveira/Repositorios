#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int numero1,numero2;
    float produto;

    printf("Digite o primeiro numero: ");
    scanf("%i",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%i",&numero2);
    produto = numero1*numero2;
    printf("numero1: %i\n",numero1);
    printf("numero2: %i\n",numero2);
    printf("Valor do produto: %.2f", produto);

    return 0;
}
