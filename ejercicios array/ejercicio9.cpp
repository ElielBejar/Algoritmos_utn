#include <iostream>
#define ALUMNOS 10

using namespace std;

//obtiene dni y notas
void obtenerDatos(int alumnos[10][2]){

  for(int i = 0; i<ALUMNOS; i++){
     cout<<"Ingrese dni del alumno: ";
     cin>>alumnos[i][0];
     cout<<"Ingrese nota del alumno: ";
     cin>>alumnos[i][1];
  }
}

//ordena las notas de mayor a menor
void ordenarNotas(){

}

//muestra el contenido del array
void mostrarDatos(){

}

int main(){

  return 0;
}
