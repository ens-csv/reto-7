
package reto7;

public class Menu {

    public Menu() {
    }

    static void menu(){
        String palabra = null;
        int valor = 1;
        while (!"0".equals(palabra)||valor!=0) {

          palabra=Nivel.nivel();
          if(!"0".equals(palabra)){
            valor=Juego.juego(palabra);
            palabra="0";
          }else{
            valor=0;
          }
        }
    }
}
