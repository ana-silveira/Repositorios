/*
Entrar com o ano de nascimento de uma pessoa e informar a sua idade. Verifique
se o ano fornecido � um ano v�lido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    system("cls");

    int ano;
    int anoAtual = 2022;
    int idade;

    printf("Insira o ano de nascimento: ");
    scanf("%d", &ano);

    // Supondo que n�o existam mais pessoa vivas nascidas antes de 1890:

    if (ano < anoAtual && ano > 1890 ) {
        idade = anoAtual - ano;
        printf("Esta pessoa tem %d anos. \n", idade);
    } else {
        puts("Data de nascimento inv�lida; Insira um ano v�lido.");
    }
}
