// program percabangan (if then then)
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header 
	cout << "Program Percabangan" << endl;
	// variable
	int a,b,c;
	bool z;
	// inputs
	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;
	cout << "Masukkan nilai c : ";
	cin >> c;
	// proses percabangan
	if (a > b) {
		z = true;
		if (a > c) {
			z = false;
		}
	} else if (a < b) {
		z = false;
		if (b > c) {
			z = true;
		}
	} else if (c > a) {
		z = true;
		if (c > b) {
			z = false;
		}
	} else {
		z = true;
	}
	
	// tampilkan z
	if (z==0) {
		cout << "z = 0 [false]" << endl;
	} else {
		cout << "z = 1 [true]" << endl;
	}
	
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
