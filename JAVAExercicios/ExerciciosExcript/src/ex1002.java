public class ex1002 {
    public static void main(String[] args) {

        System.out.print("Soma de todos os números no intervalo de 1 até 100: ");

// Utilizando a expressão FOR:

        int soma = 0;

        for (int i = 1; i <=100; i++) {
            soma += i;
        }

        System.out.println(soma);

// Utilizando a expressão WHILE:

        System.out.print("Utilizando a expressão WHILE: ");

        int soma2 = 0, i2 = 0;
        while (i2<=100){
            soma2 +=i2;
            i2++;
        }
        System.out.println(soma2);

    }
}
