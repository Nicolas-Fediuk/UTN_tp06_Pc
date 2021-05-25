/*Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números pares que aparecen en el vector. */

#include <iostream>

using namespace std;

int main (){
int par=0,i,n[10];

cout<<"Ingrese 10 numeros:"<<endl;
for (i=0;i<10;i++){
    cin>>n[i];
}
for (i=0;i<10;i++){
    if (n[i]%2==0){
        par++;
    }
}
cout<<"Cantidad de numeros pares: "<<par<<endl;
return 0;
}
