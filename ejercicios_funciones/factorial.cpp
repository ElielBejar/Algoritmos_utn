#include <iostream>

using namespace std;

int factorial(int num){

  for(int i = num-1; i>0; i--){

    num = num*(i);
  }
  return num;
}

int main(){

  int num;

  cout<<"Ingrese numero: ";
  cin>>num;

  cout<<"El factorial del numero ingresado es: "<<factorial(num);

  return 0;
}
