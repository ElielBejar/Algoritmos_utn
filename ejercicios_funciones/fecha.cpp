#include <iostream>

using namespace std;

void fecha(int fecha){

   int anio = fecha/10000;
       fecha = fecha-(anio*10000);
   int mes = fecha/100;
       fecha = fecha-(mes*100);
   int dia = fecha;

   cout<<"El anio es: "<<anio<<endl;
   cout<<"El mes es: "<<mes<<endl;
   cout<<"El dia es: "<<dia<<endl;
}

int main(){

  int fecha_8_digitos;

  cout<<"Ingrese una fecha en 8 digitos: ";
  cin>>fecha_8_digitos;

  fecha(fecha_8_digitos);

  return 0;
}
