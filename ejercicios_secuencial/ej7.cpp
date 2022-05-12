#include <iostream>

using namespace std;

int main(){

   int nota1, nota2, nota3, nota4, promedio;

   cout<<"Ingrese la nota 1 de 4: ";
   cin>>nota1;
   cout<<"Ingrese la nota 2 de 4: ";
   cin>>nota2;
   cout<<"Ingrese la nota 3 de 4: ";
   cin>>nota3;
   cout<<"Ingrese la nota 4 de 4: ";
   cin>>nota4;

   promedio = (nota1+nota2+nota3+nota4)/4;

   cout<<"El promedio de las notas es: "<<promedio;

   return 0;
}
