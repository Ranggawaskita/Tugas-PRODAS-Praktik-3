//Nama			: Rangga Waskita Dewa
//NIM			: 20051397055
//Mata Kuliah	: Praktikum Pemrograman Dasar
//Tugas			: Nomer 7

#include <iostream>
#include <conio.h>

using namespace std;
main() {
	int a, n, i, j;
	cout<<"======================================================================================== \n";
	cout<<"			Selamat Datang Diaplikasi Segitiga Angka \n";
	cout<<"======================================================================================== \n";
	cout<<"\n";
	cout<<"Masukkan Segitiga Angka : ";
	cin>>n;
	cout<<"\n";
	for (i=1; i<=n; i++)
	
	{
		a =1;
	for (j=1; j<=i; j++)
	{
		cout<<a;
		a++;
	}
	cout<<" \n";
    }
    for (i=n-1; i>=1; i--)
    
    {
    	a =1;
    for (j=1; j<=i; j++)
    {
    	cout<<a;
    	a++;
	}
	cout<<" \n";
	}
	getch ();
    
}
