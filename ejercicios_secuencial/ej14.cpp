#include <iostream>

using namespace std;

int main(){

  float presupuesto, ensambladora, pintura, electrica;

  cout<<"Ingrese un presupuesto: ";
  cin>>presupuesto;

  ensambladora=(presupuesto/100)*37;
  pintura=(presupuesto/100)*42;
  electrica=(presupuesto/100)*21;

  cout<<"Ensambladora: "<<ensambladora<<"$, pintura: "<<pintura<<"$, electrica: "<<electrica;


  return 0;
}
