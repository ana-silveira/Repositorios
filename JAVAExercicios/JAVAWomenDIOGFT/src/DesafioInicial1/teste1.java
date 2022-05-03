package DesafioInicial1;

import java.util.Scanner;

public class teste1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int N = scan.nextInt();
        int in = 0;
        int out = 0;
//TODO: Complete os espaços em branco com uma possível solução para o desafio

        if (N < 10000) {
            for (int i = 0; i < N; i++) {
                int X = scan.nextInt();
                if (X >= 10 && X <= 20) in++;
                else out++;
            }

            System.out.printf("%d in\n", in);
            System.out.printf("%d out", out);
        }
    }
    }
