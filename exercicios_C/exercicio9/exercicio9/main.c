/* Fa�a um programa para ler dois n�meros e imprimir a seguinte sa�da: Dividendo,
Divisor, Quociente e Resto, sendo um em cada linha. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dividendo, divisor, quociente, resto;

    printf("Informe o dividendo: ");
    scanf("%d", &dividendo);
    printf("Informe o divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("Dividendo: %d \n", dividendo);
    printf("Divisor: %d \n", divisor);
    printf("Quociente: %d \n", quociente);
    printf("Resto: %d \n", resto);

    return 0;
}
