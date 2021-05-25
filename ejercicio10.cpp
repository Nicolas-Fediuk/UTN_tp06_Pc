/*Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números primos que aparecen en el vector.*/

#include <iostream>

using namespace std;
int main (){
int c=0,n[10],p,j,i;

cout<<"Ingrese 10 numeros:"<<endl;
for (i=0;i<10;i++){
    cin>>n[i];
    p=0;
    for (j=1;j<=n[i];j++){
        if (n[i]%j==0){
            p++;
        }
    }
    if (p==2){
        c++;
    }
}
cout<<"Cantidad de numeros primos: "<<c<<endl;
return 0;
}
