// Passing
// by value maka variable tidak diubah tetapi array diubah
// by reference maka variable dan array diubah
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void passSatu(int x) {
	x = 0; // dijadikan 0
}
void passDua(int x) {
	x = 99;
	cout << "y = " << x << endl;
}
void passArray(int x[]) {
	x[0] = 1; // ubah indeks ke 0 -> 1
}
void passByReference(int& x) {
	x = 0;
}

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program passing\n";
	// variable
	int y;
	int arrY[] = {3};
	y = 2;
	passSatu(y);
	cout << "y = " << y << endl; // y tidak berubah
	passDua(y); // y berubah karena diproses dari fungsinya
	cout << "arrY[0] awal -> " << arrY[0] << endl;
	passArray(arrY);
	cout << "arrY[0] passing by value -> " << arrY[0] << endl;
	passByReference(y);
	cout << "y passing by reference -> " << y << endl; // y berubah
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
