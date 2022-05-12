#include <iostream>

using namespace std;

int fecha_8_digitos(int anio, int mes, int dia){

  int fecha = (anio*10000)+(mes*100)+dia;


  return fecha;
}

int main(){

  int anio, mes, dia;

  cout<<"Ingrese anio, mes, dia: "<<endl;
  cin>>anio>>mes>>dia;

  cout<<"La fecha en 8 digitos  es: "<<fecha_8_digitos(anio, mes, dia);

  return 0;
}
