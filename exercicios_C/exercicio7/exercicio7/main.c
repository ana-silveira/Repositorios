/* Fa�a um programa para ler dois n�meros e exibir a soma destes n�meros e a
diferen�a entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, dif;

    printf("Informe valor 1: ");
    scanf("%i", &num1);
    printf("Informe valor 2: ");
    scanf("%i", &num2);

    soma = num1 + num2;
    dif = num1 - num2;

    printf("A soma dos valores %i e %i eh %i e a diferenca entre eles eh %i .", num1, num2, soma, dif );

    return 0;
}
