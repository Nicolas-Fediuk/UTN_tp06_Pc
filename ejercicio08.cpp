/*Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar la cantidad de veces que ese número aparece en el vector. */

#include <iostream>

using namespace std;

int main (){
int c=0,n2,n[10],i;

cout<<"Ingrese 10 numeros: "<<endl;
for (i=0;i<10;i++){
    cin>>n[i];
}

cout<<"ingrese el numero que quiera saber cuantas veces se repite: ";
cin>>n2;

for (i=0;i<10;i++){
if (n2==n[i]){
        c++;
    }
}
cout<<"El numero se repite: "<<c<<" veces"<<endl;
return 0;
}
