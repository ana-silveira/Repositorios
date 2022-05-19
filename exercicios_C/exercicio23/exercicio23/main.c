/*Faça um programa para ler nome e nota de um aluno e informar o nome do aluno
seguido da sua situação: aprovado (nota >7), reprovado (nota <5) ou prova final (nota
>= 5 e <=7) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    char nome[35];
    int nota;

    printf("Informe o nome do aluno:");
    scanf("%s", nome);
    printf("Informe a nota de %s : ", nome);
    scanf("%d", &nota);

    if (nota > 7 ) {
        printf(" O/A aluno(a) %s está APROVADO. \n", nome);
    } else {
        if (nota >= 5) {
            printf(" O aluno %s deverá realizar PROVA FINAL. \n", nome);
            } else {
                    printf(" O aluno %s está REPROVADO. \n", nome);
                    }

        }

        system("pause");
}

