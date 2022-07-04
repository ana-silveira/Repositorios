// Fazer um programa para ler três números inteiros.
// Em seguida, msotrar qual o menopr dentre os três números lidos.
// Em caso de empate, mostrar apenas uma vez.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c, menor;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);


    if ( a < b && a < c)
    {
        menor = a;
    }
    else if (b < c)
    {
        menor = b;
    }
    else
    {
        menor = c;

    }

    printf("MENOR: %d \n", menor);

    return 0;
}
