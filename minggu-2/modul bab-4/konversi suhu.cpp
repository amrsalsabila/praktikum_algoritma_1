#include <iostream>
using namespace std;
int main()
{
	float f,k,r,c;
	cout<<"KONVERSI SUHU";
	cout<<"\nMasukkan suhu (Celcius) : ";
	cin>>c;
	f = (9/5 * c) + 32;
	k = 273 + c;
	r = (4/9 * c) + 32;
	cout<<"\nFarenheit  : "<<f<<endl;
	cout<<"Kelvin     : "<<k<<endl;
	cout<<"Reamur     : "<<r;
	return 0;
}
