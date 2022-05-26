#include <iostream>
#define ALUMNOS 10

using namespace std;

//obtiene dni y notas
void obtenerDatos(int alumnos[ALUMNOS][2]){

  for(int i = 0; i<ALUMNOS; i++){
     cout<<"Ingrese dni del alumno: ";
     cin>>alumnos[i][0];
     cout<<"Ingrese nota del alumno: ";
     cin>>alumnos[i][1];
  }
}

//ordena las notas de mayor a menor
void ordenarNotas(int alumnos[ALUMNOS][2]){

   int notaAuxiliar;//para intercambiar puestos y no perder el valor.
   int dniAuxiliar;
   int posicionAuxiliar;

   for(int i = 0; i<ALUMNOS; i++){

      dniAuxiliar = alumnos[i][0];
      notaAuxiliar = alumnos[i][1];
      posicionAuxiliar = i;

      for(int j = i+1; j<ALUMNOS; j++){

        if(notaAuxiliar < alumnos[j][1]){

            dniAuxiliar = alumnos[j][0];
            notaAuxiliar = alumnos[j][1];
            posicionAuxiliar = j;
        }
      }
      //intercambio de posiciones
      alumnos[posicionAuxiliar][0] = alumnos[i][0];
      alumnos[posicionAuxiliar][1] = alumnos[i][1];

      alumnos[i][0] = dniAuxiliar;
      alumnos[i][1] = notaAuxiliar;
   }
}

//muestra el contenido del array
void mostrarDatos(){

}

int main(){

  return 0;
}
