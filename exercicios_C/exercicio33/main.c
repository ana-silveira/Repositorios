/* Fa�a um programa que leia 3 notas de um aluno, calcule a sua m�dia aritm�tica e
imprima uma mensagem dizendo se o aluno foi aprovado, reprovado ou dever�
fazer prova final. O crit�rio de aprova��o � o seguinte: . aprovado (m�dia >= 7),
reprovado (m�dia < 3) ou prova final (3=< m�dia <7).
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
        printf(" O/A aluno(a) %s est� APROVADO. \n", nome);
    } else {
        if (media >= 3) {
            printf(" O aluno %s dever� realizar PROVA FINAL. \n", nome);
            } else {
                    printf(" O aluno %s est� REPROVADO. \n", nome);
                    }
        }

        system("pause");
}
