// Fazer um programa que some todos os algarismos de um número fornecido pelo usuário.

import java.util.Scanner;

public class ex1004 {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.print("Informe o número desejado: ");
        int numero = scan.nextInt();

        int soma = 0;

        while (numero > 0) {
            int modulo = numero % 10;

            soma += modulo;

            numero /= 10;
        }
        System.out.println(soma);
    }
}
