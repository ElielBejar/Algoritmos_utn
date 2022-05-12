#include <iostream>

using namespace std;

int factorial(int num){

  for(int i = num-1; i>0; i--){

    num = num*(i);
  }
  return num;
}

int main(){

  int num1, num2, resultado;

  cout<<"Ingrese 2 numeros: ";
  cin>>num1>>num2;

  resultado = factorial(num1) / factorial(num2)*factorial(num1-num2);

  cout<<"El combinatorio de num1 tomados de a num2 es: "<<resultado;

  return 0;
}


