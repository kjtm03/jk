#include <iostream>
using namespace std;
int binario(int numero)
{
    int bin=0;
    int i=1;
    while(numero>0){
        bin += (numero%2)*i;
        numero = numero/2;
        i*=10;
    }
    return bin;
}
int main () {
    int x;
    cin>>x;
    cout<<"binario: "<<binario(x)<<endl;
}
