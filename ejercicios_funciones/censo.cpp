#include <iostream>

using namespace std;

//Para ingresar valores numericos para las fechas
int ingreso_numero(){

  int numero;
  cin>>numero;

  return numero;
}

//Para ingresar el sexo de la persona
char ingreso_char(){

  char sexo;
  cin>>sexo;

  return sexo;
}

//devuelve la edad de una persona
//ac = actual, na = nacimiento
int edad_persona(int anio_ac, int mes_ac, int dia_ac, int anio_na, int mes_na, int dia_na){

  int edad_persona = anio_ac - anio_na;

  if(mes_na <! mes_ac){
    if(mes_na > mes_ac){
        edad_persona--;
    }else if(mes_na == mes_ac && dia_na > dia_ac){
        edad_persona--;
    }
  }
  return edad_persona;
}

bool nacio_octubre(int mes){

   bool nacio_octubre = false;

   if(mes == 10){
     nacio_octubre = true;
   }
   return nacio_octubre;
}

//devuelve true si nacio antes de 9 de julio de 1990
bool nacimiento_antes_fecha(int dia, int mes, int anio){

   bool nacio_antes = false;

   if(anio < 1990){
     nacio_antes = true;
   }else if(anio == 1990){
     if(mes < 7){
        nacio_antes = true;
     }else if(mes == 7 && dia < 9){
        nacio_antes = true;
     }
   }
   return nacio_antes;
}

//devuelve true si nacio en primavera de 1982 y es mujer
bool mujer_primavera_1982(char sexo, int dia, int mes, int anio){

    bool nacio_primavera_1982_mujer = false;

   if(sexo == 'F' && anio == 1982 && mes >=9 && mes <= 12){
     if((mes == 9 && dia >= 21) || (mes == 10 && dia <= 20)){
        nacio_primavera_1982_mujer = true;
     }else if(mes > 9 && mes < 12){
        nacio_primavera_1982_mujer = true;
     }
   }
   return nacio_primavera_1982_mujer;
}


int main(){

  int edad, nacimientos_octubre = 0, nacimientos_anteriores = 0, mujeres_primavera = 0, edad_vieja = 0;
  int dia, mes, anio;
  char sexo;

  cout<<"Ingrese dia, mes, anio y sexo: "<<endl;
  dia = ingreso_numero();
  mes = ingreso_numero();
  anio = ingreso_numero();
  sexo = ingreso_char();

  while(dia!=0){
    //obtenemos la edad de la persona
    int anio_persona = edad_persona(2022,5,7,anio,mes,dia);

    //fijarse si nacio en octubre:
    if(nacio_octubre(mes)){
        nacimientos_octubre++;
    }
    //fijarse si nacio antes de 9 de julio de 1990:
    if(nacimiento_antes_fecha(dia,mes,anio)){
        nacimientos_anteriores++;
        cout<<nacimientos_anteriores;
    }
    //fijarse si nacio en primavera de 1982 siendo mujer
    if(mujer_primavera_1982(sexo, dia, mes, anio)){
        mujeres_primavera++;
    }

    cout<<"Ingrese dia, mes, anio y sexo: "<<endl;
    dia = ingreso_numero();
    mes = ingreso_numero();
    anio = ingreso_numero();
    sexo = ingreso_char();
  }

  cout<<"Personas nacidas en octubre: "<<nacimientos_octubre<<endl;
  cout<<"Personas nacidas antes de 9/7/1990: "<<nacimientos_anteriores<<endl;
  cout<<"Mujeres nacidas en primavera de 1982: "<<mujeres_primavera;
  return 0;
}
