#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Declaração das variáveis
    float n, a, b, c, contador;

    system("cls");

    printf("======== Estruturação da Sequência de Fibonacci em Linguagem C ======== \n");
    printf("======== Desenvolvido por Ana Carolina como complemento para o Fluxograma ======== \n");
    printf("======== AV1 - Disciplina Linguagem e Técnica de Programação - Maio/2022 \n");

    printf("\n");

    printf("Informe a posição da sequência que deseja conhecer o respectivo valor: ");
    scanf("%d", &n);

    if ( n > 0 ) {
            if ( n == 1 ) {
                printf ("O valor da posição %d na sequência é 0 (zero). \n", n);
            } else {
                if ( n == 2 ) {
                    printf ("O valor da posição %d na sequência é 1. \n ", n);
                    } else {
                        if ( n >= 3 ) {
                                a = 0;
                                b = 1;
                                for ( contador = 2; contador < n; contador ++) {
                                    c = a + b;
                                    a = b;
                                    b = c;
                                }
                                printf("O valor da posição %d na sequência é %d. \n", n, c);
                        }
                    }
            }
    } else {
    puts("Posição inválida. Insira outro valor. ");
    }

}
