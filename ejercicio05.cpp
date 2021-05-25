/*Dada una lista de 20 números enteros cargarlos en un vector. Determinar e informar con
un cartel aclaratorio si el sector está ordenado estrictamente en forma creciente.
Por ejemplo: el vector (1, 3, 5, 7, 9) está ordenado estrictamente, el vector (1, 5, 3, 7) no lo
está*/

#include <iostream>

using namespace std;

int main (){
int i,corte=1,c=0,anterior,n[10];

cout<<"Ingrese 20 numeros"<<endl;

for (i=0;i<20;i++){
    cin>>n[i];
}
for (i=0;i<20;i++){
    c++;
    if (c>1){
        if (anterior>n[i]){
            corte=0;
        }
    }

    anterior=n[i];

}
if (corte==1){
    cout<<"ordenado";
}
else{
    cout<<"no ordenado";
}
return 0;
}
