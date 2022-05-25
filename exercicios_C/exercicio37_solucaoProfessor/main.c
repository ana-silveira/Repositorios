#include <conio.h>
#include <stdio.h>
main()
{
 char nome[30];
 int idade;
 char sexo;
system("cls");
 printf("Entre com o nome: ");
 scanf("%s",nome);
 fflush(stdin);
 printf("Entre com a idade: ");
 scanf("%d",&idade);
 fflush(stdin);
 printf("Entre com o sexo (M ou F): ");
 scanf("%c",&sexo);
 if (sexo == 'F' && idade < 25)
 printf("%s ACEITA",nome);
 else
 printf("%s NAO ACEITA",nome);
 getch();
}
