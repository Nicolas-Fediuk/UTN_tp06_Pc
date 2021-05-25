/*Leer 10 números y guardarlos en un vector. Determinar e informar cual es la suma de
los valores del vector.*/

#include <iostream>

using namespace std;

int main (){

int v[10],suma=0,i;

cout<<"Ingrese 10 numeros: "<<endl;

for (i=0;i<10;i++){

    cin>>v[i];

    suma+=v[i];
}

cout<<"La suma de sus numeros es: "<<suma<<endl;

return 0;
}
