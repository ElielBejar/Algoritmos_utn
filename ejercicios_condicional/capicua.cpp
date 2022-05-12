#include <iostream>

using namespace std;

int main(){

  int numero, cifra1, cifra2, cifra3, cifra4, cifra5;

  cout<<"Ingrese un numero de 5 cifras: ";
  cin>>numero;

  cifra1=numero/10000;
  numero=numero - (cifra1*10000);

  cifra2=numero/1000;
  numero=numero - (cifra2*1000);

  cifra3=numero/100;
  numero = numero - (cifra3*100);

  cifra4=numero/10;
  numero = numero - (cifra4*10);

  cifra5 = numero;

  if((cifra1 == cifra5) && (cifra2 == cifra4)){
    cout<<"El numero es capicua";
  }else{
    cout<<"El numero no es capicua";
  }
  return 0;
}
