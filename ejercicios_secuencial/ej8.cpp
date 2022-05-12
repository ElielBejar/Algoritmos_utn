#include <iostream>

using namespace std;

int main(){

  float radio, diametro, perimetro, superficie;

  cout<<"Ingrese el radio de un circulo: ";
  cin>>radio;

  diametro = radio*2;
  perimetro = 2*3.14159265*radio;
  superficie = 3.14159265*(radio*radio);

  cout<<"Diametro: "<<diametro<<", perimetro: "<<perimetro<<", superficie: "<<superficie;

  return 0;
}
