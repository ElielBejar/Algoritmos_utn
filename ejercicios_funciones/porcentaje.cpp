#include <iostream>

using namespace std;

//indica el porcentaje de num1 sobre num2
float porcentaje(float num1, float num2){

  float porcentaje = (num1/num2)*100;

  return porcentaje;
}

int main(){

  float num1, num2;

  cout<<"Ingrese dos numeros: "<<endl;
  cin>>num1>>num2;

  cout<<"El porcentaje de num1 sobre num2 es: "<<porcentaje(num1,num2);

  return 0;
}
