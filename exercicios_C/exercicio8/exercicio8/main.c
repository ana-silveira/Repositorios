/*8. Faça um programa para ler um número real e imprimir a terça parte deste número.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1;
    float num2;

    printf("Informe um numero real: ");
    scanf("%f", &num1 );

    num2 = num1 / 3;

    printf("A terca parte de %.3f eh %.3f ", num1, num2);

    return 0;
}
