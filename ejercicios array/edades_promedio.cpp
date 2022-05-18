#include <iostream>
using namespace std;

void pedir_edades(int nro_edades, float edades[]){

  for(int i = 0; i<nro_edades; i++){
    cout<<"Ingrese una edad: ";
    cin>>edades[i];
  }
}

float promedio(int nro_edades, float edades[]){

   float promedio = 0;

   for(int i = 0; i<nro_edades; i++){
      promedio+=edades[i];
   }
   promedio = promedio/nro_edades;
   return promedio;
}

float mayor_promedio(int nro_edades, float edades[], float promedio){

   for(int i = 0; i<nro_edades; i++){
      if(edades[i]>promedio){
        cout<<edades[i]<<", ";
      }
   }
}

int main(){

  float edades[10];

  pedir_edades(10, edades);
  cout<<"El promedio es: "<<promedio(10, edades);
  cout<<"Las edades mayores al promedio son: "<<endl;
  mayor_promedio(10, edades, promedio(10, edades));

  return 0;
}
