/*Fa�a um programa que leia do teclado uma temperatura em graus Celsius, e fa�a a
convers�o para Fahrenheit imprimindo o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    float celsius, fah;
    printf("Insira temperatura (em graus Celsius): ");
    scanf("%f", &celsius );

    fah = ((celsius * 9 / 5) + 32 ) / 32 ;

    printf("A temperatura equivalente em graus Fahrenheit � %.2f\n", fah);


    system("pause");

}
