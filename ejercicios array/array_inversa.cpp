#include <iostream>
using namespace std;

void pedir_numeros(int nro_numeros, float numeros[]){

  for(int i = 0; i<nro_numeros; i++){
    cout<<"Ingrese un numero: ";
    cin>>numeros[i];
  }
}

void leer_inverso_array(int length, float numeros[]){

  for(int i = length-1; i>=0; i--){
    cout<<numeros[i]<<", ";
  }

}

int main(){

  float numeros[10];

  pedir_numeros(10, numeros);
  leer_inverso_array(10, numeros);

  return 0;
}
