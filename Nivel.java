package reto7;

import java.util.Random;
import java.util.Scanner;

public class Nivel {

    public static String[] getFacil() {
        return facil;
    }

    public static void setFacil(String[] facil) {
        Nivel.facil = facil;
    }

    public static String[] getIntermedio() {
        return intermedio;
    }

    public static void setIntermedio(String[] intermedio) {
        Nivel.intermedio = intermedio;
    }

    public static String[] getAvanzado() {
        return avanzado;
    }

    public static void setAvanzado(String[] avanzado) {
        Nivel.avanzado = avanzado;
    }

    private static String[] facil = {
      "acre","bote","buey","buzo","caer","cien","ceja","copa","diez","dijo","doce","ergo","edad","ende","foca","faro","fijo","goma","hace","hule","hija","hora","idea","inca",
      "jefa","jugo","joya","loma","mole","miga","mina","maiz","nuez","once","pila","raiz","sopa","sola","taco","usar","vena","vino","vaso","yodo","yate","yoga","zeta","zinc"};
    private static String[] intermedio = {
      "atacable","ayudador","bucearia","cuadrado","cebollas","dalmatas","elaboren","ejemplar","fabricar","fragante","glaseado","gimnasia","gobierno","habanera","habitase","idolatra","identico","isomorfo","jabonear","jugador","luchador","llegaron","mecedora","muchacho","muerdago"
      ,"nocturno","nebulosa","nucleico","obedezco","ocarinas","opalinas","placebos","poblaron","peatones","quehacer","quedando","ruboriza","ridiculo","reafirma","sabatino","suavizar","subastar","trabajar","tlacoyos","utilizar","utopicas","vacante","vaciaste"  };
    private static String[] avanzado = {
      "aeroespacial","anabolizante","bicentenario ","bibliografia","damnificados","etimologicos","evacuatorias","fabricadores","fumigariamos","gnosticismos","generalizado","habitaciones","hidroaviones","inaprensivos","izquierdista","jerarquizaba","jeroglificos","laboralistas","libertadoras","mecanicismos","micromotores","nacionalizar","nomenclatura","numeraciones","ofendieramos",
      "oligarquicas","omniscientes","peculiaridad","plaguearamos","quebrantabas","quebrajarian","reaccionaran","rabiosamente","rudimentaria","saboteadores","secuenciales","subacuaticos","tuberculosis","teatralmente","urbanizadora","utilitarismo","vacacionamos","vegetaciones","vulcanizabas","zoogeografia","zonificarian","zigofilaceas","zabulduras"
    };

    public Nivel() {
    }

    public static String nivel(){
        System.out.println("Escoge Nivel: ");
        System.out.println("(1-Facil) ");
        System.out.println("(2-Intermedio) ");
        System.out.println("(3-Avanzado) ");
        Scanner lector = new Scanner(System.in);
        int nivel = lector.nextInt();
        Random rand = new Random();
        int  i = rand.nextInt(47) + 0;
        String palabra;
        switch (nivel) {
          case 1:
            palabra = facil[i];
            break;
          case 2:
            palabra = intermedio[i];
            break;
          case 3:
            palabra = avanzado[i];
            break;
          default:
            palabra = "0";
            break;
        }
        return palabra;
    }
}
