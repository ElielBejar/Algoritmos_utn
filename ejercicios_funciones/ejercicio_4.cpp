#include <iostream>

using namespace std;

//devuelve el factorial de un numero
int factorial(int num)
{

    for(int i = num-1; i>0; i--)
    {

        num = num*(i);
    }
    return num;
}
//indica si numero1 es multiplo de numero2
bool es_multiplo(int num1, int num2)
{

    bool es_multiplo = false;

    if(num1%num2 == 0)
    {

        es_multiplo = true;
    }

    return es_multiplo;
}

int main()
{

    int num, cant_multiplos3 = 0, cant_multiplos5 = 0;

    do
    {

        cout<<"Ingrese numero: ";
        cin>>num;

        if(num != 0)
        {
            //Nos dice su factorial
            cout<<"Su factorial es: "<<factorial(num)<<endl;

            //Si es multiplo de 3, se suma cant_multiplo3
            if(es_multiplo(num, 3))
            {
                cant_multiplos3++;
            }
            if(es_multiplo(num, 5))
            {
                cant_multiplos5++;
            }

        }

    }
    while(num!=0);

    cout<<"La cantidad de multiplos de 3 es: "<<cant_multiplos3<<endl;
    cout<<"La cantidad de multiplos de 5 es: "<<cant_multiplos5<<endl;
    cout<<"La cantidad de multiplos de 3 y 5 es: "<<(cant_multiplos3+cant_multiplos5);

    return 0;
}

