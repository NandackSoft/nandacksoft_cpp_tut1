// Program switch
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program Switch\n";
	// variable
	int angka;
	// input angka [1-5]
	cout << "Masukkan satu angka bulat antara 1-5 : ";
	cin >> angka;
	// proses switch
	switch(angka) {
		case 1:
			cout << "Angka pilihan adalah 1.\n";
			break;
		case 2:
			cout << "Angka pilihan adalah 2.\n";
			break;
		case 3:
			cout << "Angka pilihan adalah 3.\n";
			break;
		case 4:
			cout << "Angka pilihan adalah 4.\n";
			break;
		case 5:
			cout << "Angka pilihan adalah 5.\n";
			break;
		default:
			cout << "Angka pilihan tidak sesuai ketentuan!\n";
	}
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
