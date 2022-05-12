#include <iostream>

using namespace std;

int main(){

   int num1, num2, num3, suma, resta, multp;

   cout<<"Ingrese el numero 1 de 3";
   cin>>num1;
   cout<<"Ingrese el numero 2 de 3";
   cin>>num2;
   cout<<"Ingrese el numero 3 de 3";
   cin>>num3;

   suma=num1+num2+num3;
   resta=num1-num2-num3;
   multp=num1*num2*num3;

   cout<<"Suma: "<<suma<<", resta: "<<resta<<", multp: "<<multp;

   return 0;
}
