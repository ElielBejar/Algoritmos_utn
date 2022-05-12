#include <iostream>

using namespace std;

int main(){

  char codigo;
  int importe;

  cout<<"Ingrese el codigo del paciente(A,D,F,M,T):";
  cin>>codigo;

  switch(codigo){

     case 'A':importe=200;break;
     case 'D':importe=400;break;
     case 'F':importe=600;break;
     case 'M':
     case 'T':importe=1500;break;
     default:importe=0;
  }

  cout<<"Codigo: "<<codigo<<", numero de historia: 0000"<<endl;
  cout<<"Importe: "<<importe;

  return 0;
}
