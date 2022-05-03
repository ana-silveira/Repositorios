import java.util.Scanner;

public class ex0101 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite seu login: ");
        String login = sc.nextLine();

        System.out.print("Digite sua senha: ");
        String senha = sc.nextLine();

        // Estamos comparando um objeto instância com uma String!
        if (login.equals("AnaCarolina") && senha.equals ("106117287-29")) {
            System.out.printf ("Usuário %s logado com sucesso", login);
        } else {
            System.out.println("Valor incorreto; tente novamente.");
        }
    }
}
