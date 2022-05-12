#include <iostream>

using namespace std;

int maximo_comun_divisor(int a,int b){

     int r = a%b;

     while(r!=0){
        a = b;
        b = r;
        r = a%b;
     }
     return b;
}

int main(){

  int a, b;

  cout<<"Ingrese numero: ";
  cin>>a;

  cout<<"Ingrese otro numero: ";
  cin>>b;

  cout<<"Su maximo comun divisor es: "<<maximo_comun_divisor(a,b);

  return 0;
}


