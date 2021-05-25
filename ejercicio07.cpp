/*Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar el primer índice donde ese número aparece en el vector. En caso de no aparecer se
mostrará el valor índice igual a -1. */

#include <iostream>

using namespace std;

int main (){
cout<<"Ingrese 10 numeros: "<<endl;
int pos=0,n[10],n2,i;
for (i=0;i<10;i++){
    cin>>n[i];
}
cout<<"Ingrese el numero a buscar: ";
cin>>n2;
for (i=0;i<10;i++){
    if (n2==n[i]){
        pos=i+1;
    }
}
if (pos==0){
    pos=-1;
}
cout<<"Indice dentro del vector: "<<pos<<endl;
return 0;
}
