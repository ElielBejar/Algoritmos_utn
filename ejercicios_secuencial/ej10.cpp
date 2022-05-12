#include <iostream>

using namespace std;

int main(){

  float aprobados, desaprobados, ausentes, total;

  cout<<"Ingrese los aproados: ";
  cin>>aprobados;

  cout<<"Ingrese los desaprobados: ";
  cin>>desaprobados;

  cout<<"Ingrese los ausentes: ";
  cin>>ausentes;

  total=aprobados+desaprobados+ausentes;

  aprobados=(100/total)*aprobados;
  desaprobados=(100/total)*desaprobados;
  ausentes=(100/total)*ausentes;

  cout<<"Aprobados: "<<aprobados<<"%"<<endl;
  cout<<"Desaprobados: "<<desaprobados<<"%"<<endl;
  cout<<"Ausentes: "<<ausentes<<"%";

  return 0;
}
