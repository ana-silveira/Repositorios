#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Declara��o das vari�veis
    float n, a, b, c, contador;

    system("cls");

    printf("======== Estrutura��o da Sequ�ncia de Fibonacci em Linguagem C ======== \n");
    printf("======== Desenvolvido por Ana Carolina como complemento para o Fluxograma ======== \n");
    printf("======== AV1 - Disciplina Linguagem e T�cnica de Programa��o - Maio/2022 \n");

    printf("\n");

    printf("Informe a posi��o da sequ�ncia que deseja conhecer o respectivo valor: ");
    scanf("%d", &n);

    if ( n > 0 ) {
            if ( n == 1 ) {
                printf ("O valor da posi��o %d na sequ�ncia � 0 (zero). \n", n);
            } else {
                if ( n == 2 ) {
                    printf ("O valor da posi��o %d na sequ�ncia � 1. \n ", n);
                    } else {
                        if ( n >= 3 ) {
                                a = 0;
                                b = 1;
                                for ( contador = 2; contador < n; contador ++) {
                                    c = a + b;
                                    a = b;
                                    b = c;
                                }
                                printf("O valor da posi��o %d na sequ�ncia � %d. \n", n, c);
                        }
                    }
            }
    } else {
    puts("Posi��o inv�lida. Insira outro valor. ");
    }

}
