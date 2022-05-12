#include <iostream>


using namespace std;

int main(){

 float numero, mayor, posicion = 1;

 cout<<"Ingrese un numero: ";
 cin>>mayor;

 for(int i = 1; i<50; i++){

    cout<<"Ingrese numero "<<i+1<<"/50: ";
    cin>>numero;

    if(numero > mayor){
        mayor = numero;
        posicion = i+1;
    }
 }
 cout<<"El numero mayor ingresado esta en la posicion: "<<posicion;

 return 0;
}
