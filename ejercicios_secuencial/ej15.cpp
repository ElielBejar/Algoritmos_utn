#include <iostream>

using namespace std;

int main(){

  float base, altura, arena;

  cout<<"Ingrese la base: ";
  cin>>base;

  cout<<"Ingrese la altura: ";
  cin>>altura;

  arena = 0.5*(base*altura);

  cout<<"La cantidad de arena en metros cubicos es: "<<arena;

  return 0;
}
