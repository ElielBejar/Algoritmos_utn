#include <iostream>

using namespace std;

int main(){

  float numero, mayor, veces = 1;

  cout<<"Ingrese numero 1/10: ";
  cin>>mayor;

  for(int i = 1; i<10; i++){

    cout<<"Ingrese numero "<<i+1<<":";
    cin>>numero;

    if(numero > mayor){
        mayor = numero;
        veces = 1;
    }else if(numero == mayor){
        veces++;
    }
  }
  cout<<"El mayor numero es: "<<mayor;
  cout<<"La cantidad de veces ingresado fue: "<<veces;


  return 0;
}
