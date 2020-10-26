#include <iostream>
using namespace std;
int main()
{
	cin.ignore();
	char a[20];
	cout<<"Nama          : ";
	cin.getline (a, sizeof a);
	int b;
	cout<<"NIM           : ";
	cin>>b;
	cin.ignore();
	char c[2];
	cout<<"Kelas         : ";
	cin.getline (c, sizeof c);
	char d[2];
	cout<<"Jenis Kelamin : ";
	cin.getline (d, sizeof d);
	char e[20];
	cout<<"Alamat        : ";
	cin.getline (e, sizeof e);
	char f[20];
	cout<<"email         : ";
	cin.getline (f, sizeof f);
	int g;
	cout<<"No.telp       : ";
	cin>>g;
	
	
	return 0;
}
