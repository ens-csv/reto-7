/*
Este juego deberá tener tres niveles (Fácil, Intermedio y Avanzado).
El juego se podrá jugar todas las veces que se quiera, hasta que el usuario introduzca 0 (cero).
El usuario sólo podrá introducir de una letra a la vez.
Las palabras base estarán fijas y deben tener los siguientes lineamientos,
para el nivel 1 debe ser una palabra de cuatro letras.
Para el nivel intermedio, debe ser una palabra de ocho letras;
para el nivel avanzado, una palabra de 12 letras.
Recuerda que el juego seguirá hasta que el usuario presione 0;
ya sea cuando esté adivinando la palabra o cuando esté eligiendo el nivel a jugar.
*/
#include <iostream>
using namespace std;

void menu();
void bienvenida();
void nivel();

int int main(int argc, char const *argv[]) {
  menu();
  return 0;
}

void menu(){
  string nivel;
  bienvenida();
  while(nivel != 0){
    nivel=nivel();
    jugar(nivel);
  }
}

void bienvenida(){
  cout << "Willkommen! " << '\n';
  cout << "Benvenuto! " << '\n';
  cout << "Welcome! " << '\n';
  cout << "Bienvenido! " << '\n';
}

string nivel(){
  int nivel;
  string facil[48] = {
    acre,bote,buey,buzo,caer,cien,ceja,copa,diez,dijo,doce,ergo,edad,ende,foca,faro,fijo,goma,hace,hule,hija,hora,idea,inca,jefa,jugo,joya,loma,mole,miga,mina,maiz,nuez,once,pila,raiz,sopa,sola,taco,usar,vena,vino,vaso,yodo,yate,yoga,zeta,zinc
  };
  string intermedio[48] = {
    atacable,ayudador,bucearia,cuadrado,cebollas,dalmatas,elaboren,ejemplar,fabricar,fragante,glaseado,gimnasia,gobierno,habanera,habitase,idolatra,identico,isomorfo,jabonear,jugador,luchador,llegaron,mecedora,muchacho,muerdago,nocturno,nebulosa,nucleico,obedezco,ocarinas,opalinas,placebos,poblaron,peatones,quehacer,quedando,ruboriza,ridiculo,reafirma,sabatino,suavizar,subastar,trabajar,tlacoyos,utilizar,utopicas,vacante,vaciaste
  };
  string avanzado[48] = {
    aeroespacial,anabolizante,bicentenario ,bibliografia,damnificados,etimologicos,evacuatorias,fabricadores,fumigariamos,gnosticismos,generalizado,habitaciones,hidroaviones,inaprensivos,izquierdista,jerarquizaba,jeroglificos,laboralistas,libertadoras,mecanicismos,micromotores,nacionalizar,nomenclatura,numeraciones,ofendieramos,oligarquicas,omniscientes,peculiaridad,plaguearamos,quebrantabas,quebrajarian,reaccionaran,rabiosamente,rudimentaria,saboteadores,secuenciales,subacuaticos,tuberculosis,teatralmente,urbanizadora,utilitarismo,vacacionamos,vegetaciones,vulcanizabas,zoogeografia,zonificarian,zigofilaceas,zabulduras
  };

  cout<<"Escoge Nivel: "<<endl;
  cout<<"(1-Facil) "<<endl;
  cout<<"(2-Intermedio) "<<endl;
  cout<<"(3-Avanzado) "<<endl;
  cin>>nivel;
  switch (nivel) {
    case 0:
      return 0;
      break;
    case 1:
      return facil;
      break;
    case 2:
      return intermedio;
      break;
    case 3:
      return avanzado;
      break;
    default:
      break;
  }
}
