#include <iostream>

using namespace std;

int main(){

  int articulo, unidades;
  float precio, precio_unidad;

  cout<<"Ingrese el articulo, unidades, precio"<<endl;
  cin>>articulo>>unidades>>precio;

  precio_unidad = precio / unidades;
  cout<<"El precio por unidad es: "<<precio_unidad;

  return 0;
}
