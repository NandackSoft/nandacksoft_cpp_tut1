// array dengan \0
// menggunakan \0 untuk null atau akhir
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program array \\0 \n";
	// variable
	char ini[] = {'a','s','d',0}; // disini array isinya 4
	// proses menampilkan array (keluarnya 3)
	for (int i=0; ini[i]!='\0'; i++) {
		cout << "ini[" << i << "] -> " << ini[i] << endl;
	}
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
