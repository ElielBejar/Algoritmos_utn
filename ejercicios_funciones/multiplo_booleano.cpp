#include <iostream>

using namespace std;

bool es_multiplo(int num1, int num2){

  bool es_multiplo = false;

  if(num1%num2 == 0){

    es_multiplo = true;
  }

  return es_multiplo;
}

int main(){

  int num1, num2;

  cout<<"Ingrese el primer numero: ";
  cin>>num1;

  cout<<"Ingrese el segundo numero: ";
  cin>>num2;

  if(es_multiplo(num1, num2)){
    cout<<num1<<" es multiplo de "<<num2<<endl;
  }else{
    cout<<num1<<" no es multiplo de "<<num2<<endl;
  }

  return 0;
}
