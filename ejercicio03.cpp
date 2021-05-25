/*Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por
pantalla los valores que son mayores al promedio.*/

#include <iostream>

using namespace std;
int main (){

int v[10] ,suma,i,j,promedio,c=0;

cout<<"Ingrese 10 numeros: "<<endl;
for (i=0;i<10;i++){
    cin>>v[i];
    suma+=v[i];
}
promedio=suma/10;

for (j=0;j<10;j++){
    if (v[j]>promedio){
        c++;
    }
}
cout<<"la catidad de numeros mayores al promedio son: "<<c;
return 0;}
