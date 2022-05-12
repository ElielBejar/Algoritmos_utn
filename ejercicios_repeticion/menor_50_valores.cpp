#include <iostream>

using namespace std;

int main(){

 float menor_inicial, menor;

 cout<<"Ingrese un numero: ";
 cin>>menor_inicial;

 for(int i = 0; i<50; i++){

   cout<<"Ingrese numero:";
   cin>>menor;

   if(menor < menor_inicial){
     menor_inicial = menor;
   }
 }

 cout<<"El menor numero es: "<<menor_inicial;3

 return 0;
}
