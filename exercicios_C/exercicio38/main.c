/*
Um plano de saúde, após negociação com o governo, enviou a tabela abaixo.
Entrar com o nome e a idade de uma pessoa e imprimir o nome e o valor que ela
deverá pagar.
Até 10 anos – 30,00
Maior que 10 anos e até 29 – 60,00
Maior que 29 até 45 anos – 120,00
Maior que 45 até 59 anos – 150,00
Maior que 59 até 65 anos – 250,00
Maior que 65 anos – 400,00
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    system("cls");

    int idade;
    char nome[35];

    printf("Informe seu nome: ");
    scanf("c", &nome);
    printf("Informe sua idade: ");
    scanf("%f", &idade);

    if ( idade > 65 )


        puts (" Desconto de 30%. \n");
        else {
            if ( salario > 1200.0 )
                puts (" Desconto de 25%. \n");
            else {
                if (salario > 600.0)
                    puts(" Desconto de 20% \n");
                else {
             puts (" Isento de desconto do INSS \n");
            }
        }
      }
}
