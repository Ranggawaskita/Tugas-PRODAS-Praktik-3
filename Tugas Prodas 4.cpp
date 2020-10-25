//Nama			: Rangga Waskita Dewa
//NIM			: 20051397055
//Mata Kuliah	: Praktik Pemrograman Dasar
//Tugas			: 4

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int hasil = 0, a, b, kali;
	
	cout <<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n";
	cout <<"		Selamat Datang Diaplikasi Menghitung Nilai Suku \n";
	cout <<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n";
	cout <<"\n";
	cout <<"Masukkan Jumlah Nilai Suku : ";
	cin >>b;
	
	for(a = 1; a <= b; a++){
		hasil = hasil + a * a * a;	
		kali = a * a * a;
		cout << kali <<"\n";
}
cout <<"Jumlah Total : ";
cout <<hasil;
cin >> b;

    getch ();
	return 0;
}
