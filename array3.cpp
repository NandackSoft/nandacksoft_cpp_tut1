// Program Array 3
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program Array 3 (2 dimensi)\n";
	// variable
	int arr[3][4]; // berisi 3 baris, tiap baris berisi 4 kolom
	// proses assignment
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			arr[i][j] = j;
		}
	}
	// tampilan isi array
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			cout << "arr[" << i << "][" << j << "] -> " << arr[i][j] << endl;
		}
	}
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
