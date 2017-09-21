#include <iostream>

using namespace std;

int mod(int D, int d) {
	int r = D - ((D / d) * d);
	if (r < 0)
		r += d;
	return r;
}

int MCD_euclides(int a, int b) {
	int r = 0;
	while (b > 0) {
		r = mod(a, b);
		a = b;
		b = r;
	}
	return a;
}

int *MCD_extendido(int a, int b) {
	int *result = new int[3];
	int u1 = 1, v = 1, u = 0, v1 = 0, temp;
	int q = a / b;
	int r = mod(a, b);
	while (r > 0) {
		a = b;
		b = r;

		temp = u1;
		u1 = u;
		u = temp - q * u;
		temp = v1;
		v1 = v;
		v = temp - q * v;

		q = (a / b);
		r = mod(a, b);

		//cout << " u " << u << " u1 "<< u1 << " v " << v << " v1 " << v1 << " a " << a << " b " << b << endl;
	}

	cout<<"Modulo: "<<u<<endl;
	result[0] = b;
	result[1] = u;
	result[2] = v;

	return result;
}
void cogruente(){

}

int main()
{
	//ax=b(mod c)
	int a,b,c,u;
	int x = 0;
	int y = 0;
	cin>>a;
	cin>>b;
	cin>>c;

	cout <<"MCD: "<< *MCD_extendido(a,c) << endl;
	cin>>u;
	cout<<a<<"x"<<" = "<<b<<"("<<"mod"<<c<<")"<<endl;
	a = u*a;
	b = u*b;
	cout<<a<<"x"<<" = "<<b<<"("<<"mod"<<c<<")"<<endl;
	if(a<c){
		 x=a+c;
	}
	cout<<a<<" = "<<x<<"("<<"mod"<<c<<")"<<endl;
	if(b<c){
		y=b+c;
	}

	cout<<b<<" = "<<y<<"("<<"mod"<<c<<")"<<endl;
	for(int i=-15;i<30;i++){
		int g = i%7;
		if(g==6){
			cout<<i<<endl;
		}
	}

}
