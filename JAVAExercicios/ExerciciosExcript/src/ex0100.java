import java.util.Scanner;

public class ex0100 {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite a sua idade: ");
        int idade = scan.nextInt();

        System.out.print("Digite a idade da sua mãe: ");
        int idadeMae = scan.nextInt();

        System.out.printf("Minha mãe é %s anos mais velha do que eu.",  (idadeMae - idade));


    }
}