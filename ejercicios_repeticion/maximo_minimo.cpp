#include <iostream>

using namespace std;

int main(){

  float num = 0, max_neg = 0, min_pos = 0, total = 0, promedio = 0;
  float sumatoria = 0;

  bool f_max_neg = true, f_min_pos = true;

  do{
    cout<<"Ingrese numero: ";
    cin>>num;

    if(f_max_neg == true && num < 0){
        max_neg = num;
        f_max_neg = false;
    }else if(f_max_neg == false && num < 0){
        if(num > max_neg){
            max_neg = num;
        }
    }

    if(f_min_pos == true && num > 0){
        min_pos = num;
        f_min_pos = false;
    }else if(f_min_pos == false && num > 0){
        if(num < min_pos){
            min_pos = num;
        }
    }
  total+=num;
  sumatoria++;

  }while(num != 0);

  promedio = total/(sumatoria-1);

  cout<<"El maximo negativo es: "<<max_neg;
  cout<<"El minimo positivo es: "<<min_pos;
  cout<<"El promedio es: "<<promedio;

  return 0;
}
