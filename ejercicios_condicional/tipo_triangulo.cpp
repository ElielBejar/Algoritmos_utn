#include <iostream>

using namespace std;

int main(){

  float lado1, lado2, lado3;

  cout<<"Ingrese los lados del triangulo: "<<endl;
  cin>>lado1>>lado2>>lado3;

  if(lado1 == lado2 && lado1 == lado3){
    cout<<"Es un triangulo equilatero.";
  }else
  if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
    cout<<"Es un triangulo escaleno";
  }else{
    cout<<"Es un triangulo isoceles";
  }
  return 0;
}
