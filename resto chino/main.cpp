#include <iostream>
using namespace std;

int inverso(int a,int c)
{
    int y[0];
    for(int b = 0;b < c;b++){
        int x = (a*b)%c;
        if(x < 0){x = x + c;}
        if(x == 1){
            //cout<<"\n";
            cout<<"Inversa: "<<b<<endl;
            y[0]=b;
            break;
        }
        if(b == c-1 && x != 1){cout<<"No existe inverso modular \n";}
    }
    return *y;
}

void teorema_chino()
{
    char cong=240;
    int num;
    int x=0;
    int mult = 1;
    cout<<"x "<<cong<<" a (mod m)\n\n";
    cout<<"Ingrese el numero de congruencias: ";
    cin>>num;

    int a[num];
    int m[num];
    int M[num];
    int y[num];

    for(int i=0;i<num;i++)
    {
        cout<<" a"<<i+1<<" : ";
        cin>>a[i];
        cout<<" mod"<<i+1<<" : ";
        cin>>m[i];
    }
    cout<<"\n";

    for(int i=0;i<num;i++){mult*=m[i];}

    for(int i=0;i<num;i++){M[i]=mult/m[i];}

    for(int i=0;i<num;i++)
    {
        y[i]=inverso(M[i],m[i]);
        //cout<<y[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<num;i++)
    {
        x+=a[i]*M[i]*y[i];
        cout<<"("<<a[i]<<" * "<<M[i]<<" * "<<y[i]<<")"<<" + ";
    }
    cout<<"\n\n";
    cout<<x<<" "<<cong;
    x=x%mult;
    //233=23(mod 105)
    cout<<" "<<x<<" ("<<"mod "<<mult<<")"<<endl;
}

int main()
{
    teorema_chino();

}
