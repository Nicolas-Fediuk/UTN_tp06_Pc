/*Dada una lista de 20 números cargarlos en un vector. Determinar e informar la cantidad
de “rupturas” que tiene el vector con respecto a un orden estrictamente creciente. Ejemplo:
el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.*/

#include <iostream>

using namespace std;
int main (){
int i,n[10],c=0,anterior,corte=0;
for (i=0;i<10;i++){
    cin>>n[i];
}
for (i=0;i<10;i++){
    c++;
    if (c>1){
       if (anterior>=n[i]){
        corte++;
       }
    }
    anterior=n[i];
}
cout<<"Tiene: "<<corte<<" rupturas"<<endl;
return 0;
}
