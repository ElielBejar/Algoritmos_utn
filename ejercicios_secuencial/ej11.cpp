#include <iostream>
#include <math.h>

using namespace std;

int main(){

  float cateto1, cateto2, hipotenusa;

  cout<<"Introduce el primer cateto: ";
  cin>>cateto1;

  cout<<"Introduce el segundo cateto: ";
  cin>>cateto2;

  hipotenusa = sqrt((cateto1*cateto1)+(cateto2*cateto2));

  cout<<"El valor de la hipotenusa es: "<<hipotenusa;

  return 0;
}
