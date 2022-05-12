#include <iostream>

using namespace std;

int main(){

  int anio_actual, anio_nacimiento, edad;

  cout<<"Ingrese el anio actual: ";
  cin>>anio_actual;
  cout<<"Ingrese su anio de nacimiento: ";
  cin>>anio_nacimiento;
  edad = anio_actual - anio_nacimiento;

  cout<<"Su edad actual puede ser: "<<edad<<" o "<<(edad-1);

  return 0;
}
