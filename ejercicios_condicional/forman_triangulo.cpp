#include <iostream>

using namespace std;

int main(){

  float lado1, lado2, lado3;

  cout<<"Ingrese los 3 lados: ";
  cin>>lado1>>lado2>>lado3;

  if(lado1+lado2>lado3){
    cout<<"Forman triangulo";
  }else{
    cout<<"No forman triangulo";
  }
  return 0;
}
