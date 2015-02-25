// program fungsi lanjutan
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// Fungsi ini di overload (argument / parameternya beda, tapi namanya sama)
void munculkanJumlah(int a) {
	cout << "Jumlah : " << a << endl;
}
void munculkanJumlah(int a, int b) {
	cout << "Jumlah : " << a + b << endl;
}
void munculkanJumlah(int a, int b, int c) {
	cout << "Jumlah : " << a + b + c << endl;
}

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program Fungsi Lanjutan\n";
	//variable
	int x,y,z;
	// masukkan var
	cout << "Masukkan nilai x : ";
	cin >> x;
	cout << "Masukkan nilai y : ";
	cin >> y;
	cout << "Masukkan nilai z : ";
	cin >> z;
	// memanggil fungsi
	munculkanJumlah(x);
	munculkanJumlah(x,y);
	munculkanJumlah(x,y,z);
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
