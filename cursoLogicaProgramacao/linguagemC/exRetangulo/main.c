#include <stdio.h>
#include <math.h> // biblioteca de funções matemáticas

// Fazer um programa para ler as medidas da base e altura de um retangulo.
//Em seguida, mostrar o valor da area, perimetro e diagonal deste retângulo, com quatro casas decimais.

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    printf("AREA: %.4lf \n", area );

    perimetro = 2 * (base + altura) ;
    printf("PERIMETRO: %.4lf \n", perimetro );

    diagonal = sqrt(base * base + altura * altura) ;
    // diagonal = sqrt (pow(base, 2.0) + pow(altura, 2.0));

    printf("DIAGONAL: %.4lf \n", diagonal );


    return 0;
}
