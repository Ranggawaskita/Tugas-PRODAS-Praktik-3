//Nama			: Rangga Waskita Dewa
//NIM			: 20051397055
//Mata Kuliah	: Praktik Pemrograman Dasar
//Tugas			: Nomer 6

#include <iostream>

using namespace std;

int main()
{
	int i, j;

	cout<<" ================================================================================================ \n";
    cout<<" 				Selamat Datang Ditabel Perkalian *\n";
    cout<<" ================================================================================================ \n";
    cout<<"\n";
    cout <<"Buat \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10 Program tabel perkalian : *\n";
	

    for (int i = 1; i <= 10; i++)

    {
    	cout <<i;
    	
        for (int j = 1; j <= 10; j++)
        
        {
        	cout <<"\t*";
            
        }
        cout << endl;
    }
}
