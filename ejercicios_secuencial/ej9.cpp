#include <iostream>

using namespace std;

int main(){

  float base, altura, perimetro, superficie;

  cout<<"Introduce la base del rectangulo: ";
  cin>>base;
  cout<<"Introduce la altura del rectangulo: ";
  cin>>altura;

  perimetro = (2*base)+(2*altura);
  superficie = base * altura;

  cout<<"El perimetro es: "<<perimetro<<endl;
  cout<<"La superficie es: "<<superficie<<endl;

  return 0;
}
