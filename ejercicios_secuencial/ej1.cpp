#include <iostream>
//dados dos numeros enteros mostrar su suma
/*
dados dos numeros enteros mostrar suma
*/
using namespace std;

int main()
{
    int num1,num2,suma;
    cout<<"Ingrese un numero ";
    cin>>num1;
    cout<<"Ingrese otro"<<endl;
    cin>>num2;
    suma=num1+num2;
    //cout<<"La suma es "<<suma<<endl;
    cout<<num1<<" + "<<num2<<" = "<<suma<<endl;
    return 0;
}
