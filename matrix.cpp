// Latihan 1
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Latihan 1 : Penjumlahan Matrix 3+3\n";
	// variable
	int mat1[3][3];
	int mat2[3][3];
	int mat3[3][3];
	// mengisikan nilai matrix
	for (int i=0; i<3; i++ ) {
		// input mat1
		for (int j=0; j<3; j++) {
			cout << "Masukkan mat1[" << i << "][ " << j << "] : ";
			cin >> mat1[i][j];
		}
		// input mat2
		for (int j=0; j<3; j++) {
			cout << "Masukkan mat2[" << i << "][ " << j << "] : ";
			cin >> mat2[i][j];
		}
	}
	
	// proses penjumlahan
	for (int i=0; i<3; i++ ) {
		for (int j=0; j<3; j++) {
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	// tampilkan isi matrix
	cout << endl << endl;
	// Matrix 1
	cout << "Matrix 1 : \n";
	for (int i=0; i<3; i++ ) {
		for (int j=0; j<3; j++) {
			cout << mat1[i][j];
		}
		cout << endl;
	}
	// Matrix 2
	cout << "Matrix 2 : \n";
	for (int i=0; i<3; i++ ) {
		for (int j=0; j<3; j++) {
			cout << mat2[i][j];
		}
		cout << endl;
	}
	// Matrix 3
	cout << "Matrix 3 : (matrix 1 + matrix 3) \n";
	for (int i=0; i<3; i++ ) {
		for (int j=0; j<3; j++) {
			cout << mat3[i][j];
		}
		cout << endl;
	}
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
