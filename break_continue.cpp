// Program break continue
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program break & continue\n";
	// variable
	int a = 20, b = 20;
	// proses output a
	cout << "Break : \n";
	while (a>0) {
		// jika a kurang dari 5, keluar perulangan
		if (a<5) {
			cout << "a berhenti!\n";
			break;
		} else {
			cout << "a -> " << a << endl;
			a--;
		}
	}
	
	// jeda
	cout << "\n------------------------\n\n";
	
	// proses output b
	cout << "Continue : \n";
	while (b>0) {
		// jika b adalah genap, lewati perulangan
		if (b % 2 == 0) {
			b--;
			continue;
		} else {
			cout << "b -> " << b << endl;
			b--;
		}
	}
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
