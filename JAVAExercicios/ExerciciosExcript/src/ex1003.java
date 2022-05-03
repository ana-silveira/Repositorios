import java.util.Scanner;

public class ex1003 {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.print("Insira o valor inicial: ");
        int valorInicial = scan.nextInt();

        System.out.println();

        System.out.print("Insira o valor final: ");
        int valorFinal = scan.nextInt();

        System.out.println();

        int somaTotal = 0;
        int soma = 0;

        for (int i = 0 ; i <= (valorFinal - valorInicial); i++) {
            soma = valorInicial + i;
            somaTotal += soma;
        }

        System.out.print( "Valor da somaTotal: " + somaTotal);


        /*
        Resolução do exercicio utilizando while:

        int i = valorInicial;
        int soma = valorInicial;

        while (i < valorFinal) {
        i++;
        soma += i;
        }

         */
    }
}
