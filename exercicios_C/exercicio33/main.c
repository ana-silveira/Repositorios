/* Faça um programa que leia 3 notas de um aluno, calcule a sua média aritmética e
imprima uma mensagem dizendo se o aluno foi aprovado, reprovado ou deverá
fazer prova final. O critério de aprovação é o seguinte: . aprovado (média >= 7),
reprovado (média < 3) ou prova final (3=< média <7).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("cls");

    char nome[35];
    int nota1, nota2, nota3, media;

    printf("Informe o nome do aluno:");
    scanf("%s", nome);
    printf("Informe a nota 1 de %s : ", nome);
    scanf("%d", &nota1);
    printf("Informe a nota 2 de %s : ", nome);
    scanf("%d", &nota2);
    printf("Informe a nota 3 de %s : ", nome);
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3 ;

    if (media >= 7 ) {
        printf(" O/A aluno(a) %s está APROVADO. \n", nome);
    } else {
        if (media >= 3) {
            printf(" O aluno %s deverá realizar PROVA FINAL. \n", nome);
            } else {
                    printf(" O aluno %s está REPROVADO. \n", nome);
                    }
        }

        system("pause");
}
