#include <iostream>

using namespace std;

int main(){

  int numero, cifra1, cifra2, cifra3, cifra4, resultado;

  cout<<"Ingrese un numero de 4 cifras: ";
  cin>>numero;

  cifra1 = numero/1000;
  numero = numero-(cifra1*1000);
  cifra2 = numero/100;
  numero = numero-(cifra2*100);
  cifra3 = numero/10;
  cifra4 = numero-(cifra3*10);
  resultado = cifra1+cifra2+cifra3+cifra4;

  cout<<"La suma de sus digitos es: "<<resultado;

  return 0;
}
