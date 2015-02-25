// program operator
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program operator" << endl;
	// variable
	int x,y;
	// input x
	cout << "Masukkan x : ";
	cin >> x;
	// input y
	cout << "Masukkan y : ";
	cin >> y;
	// proses operasi
	cout << x << " + " << y << " = " << x+y << endl;
	cout << x << " - " << y << " = " << x-y << endl;
	cout << x << " * " << y << " = " << x*y << endl;
	cout << x << " / " << y << " = " << x/y << endl;
	cout << x << " % " << y << " = " << x%y << endl;
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
