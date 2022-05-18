#include <iostream>

using namespace std;

void pedir_numeros(int nro_numeros, float numeros[]){

  for(int i = 0; i<nro_numeros; i++){
    cout<<"Ingrese una nota: ";
    cin>>numeros[i];
  }
}
float nota_maxima(int nro_notas, float notas[]){

   float nota_maxima = 0;

   for(int i = 0; i<nro_notas; i++){

      if(notas[i] > nota_maxima){
         nota_maxima = notas[i];
      }
   }
   return nota_maxima;
}

int main(){

  float notas[10];

  pedir_numeros(10, notas);
  cout<<"La nota maxima es: "<<nota_maxima(10, notas);

  return 0;
}
