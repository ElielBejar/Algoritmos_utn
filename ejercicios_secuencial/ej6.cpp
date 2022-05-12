#include <iostream>

using namespace std;

int main(){

  int anios, meses, meses_totales;

  cout<<"Ingrese cuantos anios tiene: ";
  cin>>anios;
  cout<<"Ingrese hace cuantos meses cumplio anios: ";
  cin>>meses;

  meses_totales = (anios*12)+meses;

  cout<<"Meses totales: "<<meses_totales;

  return 0;
}
