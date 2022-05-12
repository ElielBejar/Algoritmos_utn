#include <iostream>

using namespace std;


int main(){

  float numero, mayor1, mayor2;

  cout<<"Ingrese numero 1/10: ";
  cin>>mayor1;
  cout<<"Ingrese numero 2/10: ";
  cin>>mayor2;

  for(int i = 3; i<=10; i++){

    cout<<"Ingrese numero "<<i<<"/10: ";
    cin>>numero;

    if(numero > mayor1){
        mayor1 = numero;
    }else if(numero > mayor2){
        mayor2 = numero;
    }
  }
  cout<<"Los dos mayores numeros son: "<<mayor1<<" y "<<mayor2;

  return 0;
}
