/*
Faça um programa que calcule e apresente o volume de uma caixa retangular, por
meio da fórmula: volume = comprimento * largura * altura
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int comprimento, largura, altura, volume;

    printf("Informe o comprimento: ");
    scanf("%d", &comprimento);
    printf("Informe a largura: ");
    scanf("%d", &largura);
    printf("Informe a altura: ");
    scanf("%d", &altura);

    volume = comprimento * altura * largura ;

    printf("\n");
    printf("==========================================\n");

    printf("O volume do retângulo é %d. \n", volume);

}
