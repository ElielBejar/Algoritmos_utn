//El programa no funciona porque el switch no es correcto
//sacar el switch y poner if else.

#include <iostream>

using namespace std;

//indica a que valor pertenece una edad
//unsigned son 0 y positivos, no negativos
unsigned edadAGrupoEtario(unsigned edad){

  unsigned valor;

  switch(edad){

    case (edad<14):
          valor=1;break;

    case (edad >= 15 && edad <= 21):
          valor=2;break;

    case (edad >= 22 && edad <= 28):
          valor=3;break;

    case (edad >= 29 && edad <= 35):
          valor=4;break;

    case (edad >= 36 && edad <= 42):
          valor=5;break;

    case (edad >= 43 && edad <= 49):
          valor=6;break;

    case (edad >= 50 && edad <= 63):
          valor=7;break;

    case (edad > 64):
          valor=8;break;

    default:valor=0;break;
  }

  return valor;
}

int main(){

  unsigned edad;

  cout<<"Ingrese una edad: ";
  cin>>edad;

  cout<<"Esa edad tiene el valor: "<<edadAGrupoEtario(edad);

  return 0;
}


