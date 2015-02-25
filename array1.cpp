// Program array1
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program Array 1\n";
	// variable
	int arrBaru[5]; // isinya 5
	// proses assignment otomatis
	for (int i=0;i<5;i++) {
		arrBaru[i] = i+2;
	}
	// tampilkan isi array
	for (int i=0; i<5; i++) {
		cout << "arrBaru[" << i << "] => " << arrBaru[i] << endl;
	}
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
