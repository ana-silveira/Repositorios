// Fazer um programa para ler o nome e a idade de duas pessoas.
// Ao final, mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpar_entrada() {
	char c;
	while ( (c = getchar()) != '\n' && (c != EOF) ) {}
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome1 [50], nome2 [50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    gets(nome1); // para ler o nome até o final, considerando os espaços, uso o gets ao inves do scanf.
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    limpar_entrada();
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0 ;
    // media = (double) (idade1 + idade2) / 2;

    printf("A idade media de %s e %s é de %.1lf anos.", nome1, nome2, media);

    return 0;
}
