/*
Entrar com nome, idade e sexo (M, m, F, f) de uma pessoa. Se a pessoa for do sexo
feminino e tiver menos de 25 anos ent�o imprimir nome e a mensagem ACEITA,
caso contr�rio, imprimir nome e a mensagem n�o aceita .
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    system("cls");

    char nome[35];
    int idade;
    char sexo;

    printf("Insira o nome da pessoa: ");
    scanf("%s", &nome);
    printf("Insira a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Idade: %d \n", idade);
    printf("Insira o sexo da pessoa (M/m ou F/f): ");
    scanf("%s", &sexo);

    printf("Idade: %d \n", idade);


   if ((sexo == 'M') || (sexo == 'm') ||(sexo == 'F') ||(sexo == 'f')) {

    printf("Idade: %d\n", idade);

            if (idade < 25) {

                printf("Idade: %d\n", idade);

                if ((sexo == 'F') ||(sexo == 'f')) {
                printf( "%s => ACEITA", nome);
                } else {
                printf("%s => N�O ACEITA", nome);
                }

            } else {
                printf("%s => N�O ACEITA", nome);

                }
   } else {
       puts("Caractere inv�lido; Digite M/m ou F/f. \n");
   }
}
