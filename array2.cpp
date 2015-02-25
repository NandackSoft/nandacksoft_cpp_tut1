// Program Array 2
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program Array 2\n";
	// variable
	int x[] = {2,3,1,0,5};
	// tampilkan isi array
	for (int i=0; i<5; i++) {
		cout <<"x["<<i<<"] -> "<<x[i]<<endl;
	}
	// proses mengganti isi array pada index genap
	for (int i=0; i<5; i++) {
		if (i%2 == 0 && i>0) {
			x[i] = x[i] + 2;
		}
	}
	// tampilkan isi array setelah diubah
	cout << "--------------\n\n";
	for (int i=0; i<5; i++) {
		cout <<"x["<<i<<"] -> "<<x[i]<<endl;
	}
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
