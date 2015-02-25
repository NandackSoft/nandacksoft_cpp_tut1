// program perulangan
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program Perulangan\n";
	// variable
	int x,y,z;
	// input y
	cout << "Masukkan nilai y : ";
	cin >> y;
	
	// perulangan while
	cout << "Perulangan while(y>0)" << endl;
	while(y>0) {
		cout << "y -> " << y << endl;
		y--;
	}
	// jeda
	cout << endl << endl;
	
	// perulangan do while
	cout << "Perulangan do while\n";
	z = 10;
	do {
		cout << "z -> " << z << endl;
		z--;
	} while (z>0);
	// jeda
	cout << endl << endl;
	
	// perulangan for
	cout << "Perulangan for(x=0;x<10;x++)\n";
	for (x=0;x<10;x++) {
		cout << "x -> " << x << endl;
	}
	
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
