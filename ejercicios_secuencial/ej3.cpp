#include <iostream>

using namespace std;

int main(){

  int num1, num2, resultado1, resultado2;

  cout<<"Ingrese numero 1 de 2: ";
  cin>>num1;
  cout<<"Ingrese numero 2 de 2: ";
  cin>>num2;
  resultado1=(num1*2)+(num2*num2);
  resultado2=((num1*num1*num1)+(num2*num2*num2))/2;
  cout<<"El resultado es: "<<resultado1;
  cout<<"El promedio de sus cubos es: "<<resultado2;

  return 0;
}
