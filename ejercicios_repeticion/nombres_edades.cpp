#include <iostream>

using namespace std;

int main(){

  string nombre = "", nombre_mayor_edad, nombre_menor_edad;
  bool primera_edad = true;
  int fecha_nacimiento, fecha_en_dias, fecha_mayor = 0, fecha_menor = 0;
  int c1, c2, c3, c4, c5, c6, c7, c8;//c significa cifra de la fecha
  int anios = 0, meses = 0, dias = 0;

  while(nombre != "fin"){

    cout<<"Ingrege el nombre: "<<endl;
    cin>>nombre;

    cout<<"Ingrese su fecha de nacimiento en el fomrato AAAAMMDD: "<<endl;
    cin>>fecha_nacimiento;

    //separar cifras en unidades
    c1=fecha_nacimiento/10000000;
    anios+=(c1*1000);
    fecha_nacimiento = fecha_nacimiento-(c1*10000000);

    c2=fecha_nacimiento/1000000;
    anios+=(c2*100);
    fecha_nacimiento = fecha_nacimiento-(c2*1000000);

    c3=fecha_nacimiento/100000;
    anios+=(c3*10);
    fecha_nacimiento = fecha_nacimiento-(c3*100000);

    c4=fecha_nacimiento/10000;
    anios+=c4;
    fecha_nacimiento = fecha_nacimiento-(c4*10000);

    c5=fecha_nacimiento/1000;
    meses+=(c5*10);
    fecha_nacimiento = fecha_nacimiento-(c5*1000);

    c6=fecha_nacimiento/100;
    meses+=c6;
    fecha_nacimiento = fecha_nacimiento-(c6*100);

    c7=fecha_nacimiento/10;
    dias+=(c7*10);
    fecha_nacimiento = fecha_nacimiento-(c7*10);

    c8=fecha_nacimiento;
    dias+=c8;

    fecha_en_dias = (anios*365) + (meses*30) + dias;
   if(nombre!="fin"){
    if(fecha_en_dias > fecha_mayor){
        nombre_menor_edad = nombre;
        fecha_mayor = fecha_en_dias;
    }else if(fecha_en_dias < fecha_menor || primera_edad==true){
        fecha_menor = fecha_en_dias;
        nombre_mayor_edad = nombre;
        primera_edad=false;
    }

    }
  }
   cout<<"El nombre con mayor edad es: "<<nombre_mayor_edad<<endl;
   cout<<"El nombre con menor edad es: "<<nombre_menor_edad<<endl;
  return 0;
}
