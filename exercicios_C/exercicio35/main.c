/*
Entrar com o salário de uma pessoa e imprimir o desconto do INSS segundo a
tabela abaixo:
menor ou igual a 600,00 – isento
maior que 600,00 e menor ou igual a 1.200,00 – 20%
maior que 1.200,00 e menor ou igual a 2.000,00 – 25%
maior que 2.000,00 30%

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    system("cls");

    float salario;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    if ( salario > 2000.0 )
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
