// Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual.
// Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo:
// Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem REPROVADO.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double nota1, nota2, notaFinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    mediaFinal = (nota1 + nota2)/2 ;

    printf("NOTA FINAL: %.2lf \n", notaFinal);

    if (mediaFinal < 60.00) {
        printf("REPROVADO \n");
    }

    return 0;
}
