// Fazer um programa para ler os 3 coeficientes de uma equa��o de segundo grau.
// Usando a f�rmula de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais, conforme exemplo.
// Se a equa��o n�o tiver ra�zes reais, mostrar uma mensagem.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double cA, cB, cC, delta, x1, x2;

    printf("Coeficiente a: ");
    scanf("%lf", &cA);
    printf("Coeficiente b: ");
    scanf("%lf", &cB);
    printf("Coeficiente c: ");
    scanf("%lf", &cC);

    delta = cB * cB - 4 * cA * cC;

    // Delta n�o pode ser negativo e
    // Coeficiente a n�o pode ser zero.

    if ( cA == 0 || delta < 0 )
    {
        printf("Esta equa��o n�o possui raizes reais. \n");
    }
    else
    {
        x1 = (-cB + sqrt(delta)) / (2 * cA);
        x2 = (-cB - sqrt(delta)) / (2 * cA);
        printf("X1 = %.4lf \n", x1);
        printf("X2 = %.4lf \n", x2);
    }

    // Baskara: ax.x + bx + c = 0



    return 0;
}
