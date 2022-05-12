#include <iostream>

using namespace std;

int main(){

  int mes;

  cout<<"Ingrese el mes(del 1 al 12)";
  cin>>mes;

  switch(mes){

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout<<"31 dias";break;

    case 2: cout<<"28 dias";break;

    default: cout<<"30 dias";break;
  }

  return 0;
}
