/*Dada una lista de 10 n�meros cargarlos en un vector. Luego intercambiar en el vector el
n�mero en la posici�n 0 con el n�mero en la posici�n 9. */

#include <iostream>

using namespace std;

int main (){
int n[10],i,num,num2;

cout<<"Ingrese 10 numeros: "<<endl;

for (i=0;i<10;i++){
    cin>>n[i];
}
num=n[0];
num2=n[9];

for (i=0;i<10;i++){
   if (i==0){
        n[0]=num2;
    }
    if (i==9){
        n[9]=num;
    }
}
cout<<endl;
for (i=0;i<10;i++){
    cout<<n[i]<<endl;
}
return 0;
}
