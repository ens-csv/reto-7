//g++ -o test reto7.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void menu();
string nivel();
int juego(string nivel);

int main(int argc, char const *argv[]) {
  menu();
  return 0;
}

void menu(){
  string palabra;
  int valor;
  while (palabra!="0"||valor!=0) {
    palabra=nivel();
    if(palabra!="0"){
      valor=juego(palabra);
      palabra="0";
    }else{
      valor=0;
    }
  }
}

string nivel(){
  int nivel;
  string palabra;
  int i;
  string facil[48] = {
    "acre","bote","buey","buzo","caer","cien","ceja","copa","diez","dijo","doce","ergo","edad","ende","foca","faro","fijo","goma","hace","hule","hija","hora","idea","inca",
    "jefa","jugo","joya","loma","mole","miga","mina","maiz","nuez","once","pila","raiz","sopa","sola","taco","usar","vena","vino","vaso","yodo","yate","yoga","zeta","zinc"};
  string intermedio[48] = {
    "atacable","ayudador","bucearia","cuadrado","cebollas","dalmatas","elaboren","ejemplar","fabricar","fragante","glaseado","gimnasia","gobierno","habanera","habitase","idolatra","identico","isomorfo","jabonear","jugador","luchador","llegaron","mecedora","muchacho","muerdago"
    ,"nocturno","nebulosa","nucleico","obedezco","ocarinas","opalinas","placebos","poblaron","peatones","quehacer","quedando","ruboriza","ridiculo","reafirma","sabatino","suavizar","subastar","trabajar","tlacoyos","utilizar","utopicas","vacante","vaciaste"  };
  string avanzado[48] = {
    "aeroespacial","anabolizante","bicentenario ","bibliografia","damnificados","etimologicos","evacuatorias","fabricadores","fumigariamos","gnosticismos","generalizado","habitaciones","hidroaviones","inaprensivos","izquierdista","jerarquizaba","jeroglificos","laboralistas","libertadoras","mecanicismos","micromotores","nacionalizar","nomenclatura","numeraciones","ofendieramos",
    "oligarquicas","omniscientes","peculiaridad","plaguearamos","quebrantabas","quebrajarian","reaccionaran","rabiosamente","rudimentaria","saboteadores","secuenciales","subacuaticos","tuberculosis","teatralmente","urbanizadora","utilitarismo","vacacionamos","vegetaciones","vulcanizabas","zoogeografia","zonificarian","zigofilaceas","zabulduras"
  };

  cout<<"Escoge Nivel: "<<endl;
  cout<<"(1-Facil) "<<endl;
  cout<<"(2-Intermedio) "<<endl;
  cout<<"(3-Avanzado) "<<endl;
  cin>>nivel;
  srand(time(NULL));
  i = rand() % 47 + 0;
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

int juego(string nivel){
  int n = nivel.length();
  char array[n];
  char letra='1';
  int completo=0;
  bool letraCorrecta;
  for (int i = 0; i < n; i++) {
    array[i]='X';
  }

  while(letra!='0') {
    for (int i = 0; i < n; i++) {
      cout<<array[i];
    }
    cout<<"\nIntroduce la letra: ";
    cin>>letra;
    letraCorrecta=false;
    if(letra!='0'){
      for (int i = 0; i < n; i++) {
        if(letra == nivel[i]){
          if(array[i]!=letra){
            array[i]=letra;
            completo++;
            letraCorrecta=true;
          }
        }
      }
      if(!letraCorrecta){
        cout<<"Intentalo de nuevo!"<<endl;
      }
    }
    if (completo>=n) {
      letra='0';
      for (int i = 0; i < n; i++) {
        cout<<array[i];
      }
      cout<<endl;
    }
  }
  if (completo>=n) {
    return 1;
  }
  return 0;
}
