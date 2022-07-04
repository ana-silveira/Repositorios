#include <stdio.h>


int main()
{
    double l, c, mQuadrado, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &l);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &c);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &mQuadrado);

    area = l * c;

    printf("Area do terreno = %.2lf \n", area);

    preco = area * mQuadrado;

    printf("Preco do terreno = %.2lf \n", preco);


    return 0;
}
