#include <iostream>
#define LENGTH 5

using namespace std;

//obtiene los datos para rellenar el array
void pedirDatos(int productos[LENGTH][2]){

   for(int i=0;i<LENGTH; i++){
      cout<<"Ingrese codigo del producto: ";
      cin>>productos[i][0];
      cout<<"Ingrese precio del producto: ";
      cin>>productos[i][1];
   }
}

//ordena el array por precios de mayor a menor
void ordenarPrecios(int productos[LENGTH][2]){

   int ubicacionAuxiliar;
   int codigoAuxiliar;
   int precioAuxiliar;

   for(int i = 0; i<LENGTH; i++){

        ubicacionAuxiliar = i;
        codigoAuxiliar = productos[i][0];
        precioAuxiliar = productos[i][1];

     for(int j = i+1; j<LENGTH; j++){
        if(productos[i][1] < productos[j][1] && precioAuxiliar < productos[j][1]){

            codigoAuxiliar = productos[j][0];
            precioAuxiliar = productos[j][1];
            ubicacionAuxiliar = j;
        }
     }
     productos[ubicacionAuxiliar][0] = productos[i][0];
     productos[ubicacionAuxiliar][1] = productos[i][1];
     productos[i][0] = codigoAuxiliar;
     productos[i][1] = precioAuxiliar;
   }
}
void mostrarProductos(int productos[LENGTH][2]){
   for(int i = 0; i<LENGTH; i++){
        cout<<"Codigo: "<<productos[i][0]<<", precio: "<<productos[i][1]<<endl;
   }
}

int mostrarPrecioPorCodigo(int productos[LENGTH][2], int codigo){

   int precio = 0;

   for(int i = 0; i<LENGTH; i++){
      if(productos[i][0] == codigo){
        precio = productos[i][1];
      }
   }
   return precio;
}

int pedirCodigo(){

  int codigo;

  cout<<"Ingrese un codigo para buscar su precio: ";
  cin>>codigo;

  return codigo;
}

int main(){

  int productos[LENGTH][2];

  pedirDatos(productos);
  ordenarPrecios(productos);
  mostrarProductos(productos);
  cout<<mostrarPrecioPorCodigo(productos, pedirCodigo());

  return 0;
}
