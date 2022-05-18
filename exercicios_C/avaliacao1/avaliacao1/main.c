/* Avaliação – Trabalho da Disciplina [AVA 1]

Situacção problematizadora: Uma empresa necessita de um programa que simule uma calculadora para poder ajudar
o setor financeiro a realizar as operações triviais  (soma, subtração, multiplicação e divisão).
É importante que a calculadora calcule de forma simultânea todas as quatro operações e exiba os seus respectivos valores.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    float valor1, valor2, soma, sub, div, mult;

    system("cls");

    printf("======== Programa de Calculadora desenvolvido pela aluna Ana Carolina. ======== \n");
    printf("\n");

    // Entrada:
    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);

    // Processamento:
    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    div = valor1 / valor2;


    printf("\n");
    printf("========================================\n");
    printf("\n");

    // Saída :
    printf("Os resultados para os valores %.2f e %.2f são: \n", valor1, valor2);
    printf("=> Soma: %.2f\n", soma);
    printf("=> Subtração: %.2f\n", sub);
    printf("=> Multiplicação: %.2f\n", mult);
    printf("=> Divisão: %.2f\n", div);

    printf("\n");

    system("pause");

}
