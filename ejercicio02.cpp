/*Leer 10 números y guardarlos en un vector. Determinar e informar cual es el valor
máximo y su posición dentro del vector.*/

#include <iostream>

using namespace std;

int main (){

cout<<"ingrese 10 numeros: "<<endl;

int v[10],i,j,maximo,p;

for (i=1;i<11;i++){
    cin>>v[i];
}
    maximo=0;
    p=0;
for (j=1;j<11;j++){
    if (v[j]>maximo){
        maximo=v[j];
        p=j;
    }
}
cout<<"numero maximo: "<<maximo<<endl;
cout<<"en la posicion: "<<p<<endl;

return 0;
}
