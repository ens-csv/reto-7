
package reto7;

import java.util.Scanner;

public class Juego {

    public Juego() {
    }

    public static int juego(String nivel){
        int n = nivel.length();
        char[] array;
        array = new char[n];
        char letra='1';
        int completo=0;
        boolean letraCorrecta;
        for (int i = 0; i < n; i++) {
          array[i]='X';
        }

        while(letra!='0') {
          for (int i = 0; i < n; i++) {
            System.out.print(array[i]);
          }
          System.out.print("\nIntroduce la letra: ");
          Scanner lector = new Scanner(System.in);
          letra = lector.next().charAt(0);
          letraCorrecta=false;
          if(letra!='0'){
            for (int i = 0; i < n; i++) {
              if(letra == nivel.charAt(i)){
                if(array[i]!=letra){
                  array[i]=letra;
                  completo++;
                  letraCorrecta=true;
                }
              }
            }
            if(!letraCorrecta){
              System.out.println("Intentalo de nuevo!");
            }
          }
          if (completo>=n) {
            letra='0';
            for (int i = 0; i < n; i++) {
              System.out.print(array[i]);
            }
            System.out.println("\n");
          }
        }
        if (completo>=n) {
          return 1;
        }
        return 0;
    }

}
