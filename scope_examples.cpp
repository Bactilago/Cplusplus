// Fig 3.12
// Ejemplo de alcance
#include <iostream>
using std::cout;
using std::endl;

void usoLocal(void); //prototipo de funcion
void usoStaticLocal(void);
void usoGlobal(void);

int x=1; // variable global


int main(int argc, char const *argv[]) {
  int x = 5; // variable local a main
  cout << "la x local en el alcance externo de main es " << x << endl;
  //inicia nuevo alcance}  //
  {
    int x =7;
    cout << "la x local en el alcance interior de main es " << x << endl;
  } // finaliza nuevo alcance

  cout << "la x local en el alcance externo de main es " << x << endl;

  usoLocal(); // usoLocal tiene una x local
  usoStaticLocal(); // usoStaticLocal tiene una x static local
  usoGlobal(); // usoGlobal utiliza a la x global
  usoLocal(); // usoLocal reinicializa su x local
  usoStaticLocal(); // la x estatica local retiene su valor previo
  usoGlobal(); //la x global retiene tambien su valor
  usoGlobal(); // usoGlobal utiliza a la x global
  usoGlobal(); // usoGlobal utiliza a la x global
  usoStaticLocal(); // la x estatica local retiene su valor previo

  cout << "\nla x local en main es " << x << endl;

  return 0;
}


// usoLocal reinicializa la variable x durante cada llamada
void usoLocal(void) {

int x = 25;
cout << endl << "la x local es " << x
<< " al entrar a usoLocal"  << endl;
x++;
cout << "la x local es " << x << " al salir de usoLocal" << endl;

}

//usoStaticLocal inicializa a la variable estatica local x solo la
// primera vez que se llama a la funcion; el valor de x se guarda entre las
//llamadas a esta funcion

void usoStaticLocal(void){

// se inicializa la primera vez que se llama a usoStaticLocal
static int x=50;
cout << endl << "la x estatica local es " << x << " al entrar a usoStaticLocal"
<< endl;
++x;
cout << "la x estatica local es " << x << " al salir de usoStaticLocal" <<
endl;
}

//usoGlobal modifica la variable x global durante cada llamadas
void usoGlobal (void){
  cout << endl << "la x global es " << x << " al entrar a usoGlobal" << endl;
  x *=10;
  cout << "la x global es " << x << " al salir de usoGlobal" << endl;
}

