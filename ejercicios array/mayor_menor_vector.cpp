#include <iostream>
using namespace std;

void pedir_numeros(int nro_numeros, float numeros[]){

  for(int i = 0; i<nro_numeros; i++){
    cout<<"Ingrese un numero: ";
    cin>>numeros[i];
  }
}

void mostrar_numeros(int nro_numeros, float numeros[]){

   for(int i = 0; i<nro_numeros; i++){
      cout<<numeros[i]<<", ";
   }
}

float mayor_numero(int nro_numeros, float numeros[]){

   float mayor_numero = numeros[0];
   for(int i = 1; i<nro_numeros; i++){

      if(numeros[i] > mayor_numero){
         mayor_numero = numeros[i];
      }
   }
   return mayor_numero;
}

float menor_numero(int nro_numeros, float numeros[]){

   float menor_numero = numeros[0];
   for(int i = 1; i<nro_numeros; i++){

      if(numeros[i] < menor_numero){
         menor_numero = numeros[i];
      }
   }
   return menor_numero;
}

int main(){

  float numeros[10];
  pedir_numeros(10, numeros);
  mostrar_numeros(10, numeros);
  cout<<"El mayor numero es: "<<mayor_numero(10, numeros)<<endl;
  cout<<"El menor numero es: "<<menor_numero(10, numeros)<<endl;

  return 0;
}
