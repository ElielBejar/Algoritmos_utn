#include <iostream>

using namespace std;

int main(){

  float pesos, dolares, euros;

  cout<<"Ingrese los pesos a cambiar: ";
  cin>>pesos;

  dolares=pesos*112.77;
  euros=pesos*122.14;

  cout<<"Dolares: "<<dolares<<", euros: "<<euros;

  return 0;
}

