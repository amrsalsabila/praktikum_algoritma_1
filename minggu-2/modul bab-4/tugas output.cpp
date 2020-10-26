#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"Masukkan:";
	cin.ignore();
	char a[20];
	cout<<"Nama    : ";
	cin.getline (a,sizeof a);
	int b;
	cout<<"NIM     : ";
	cin>> b;
	cin.ignore();
	char c[20];
	cout<<"Plug    : ";
	cin.getline (c,sizeof c);cout<<endl;
	
	cout<<"Inilah data anda:"<<endl;
	cout<<"Nama   :"<<a<<endl;
	cout<<"NIm    :"<<b<<endl;
	cout<<"Plug   :"<<c<<endl;
	
	cout<<"\nDalam bentuk tabel:\n";
	cout<<"=================================================\n";
	cout<<"NIM"<<setw (10)<<"|"<<setw (10)<<"Nama"<<setw (10)<<"|"<<setw (10)<<"Plug"<<endl;
	cout<<"=================================================\n";
	cout<<b<<setw(4)<<"|"<<setw(10)<<a<<setw(5)<<"|"<<c<<endl;
	cout<<"-------------------------------------------------";
	return 0;
}
