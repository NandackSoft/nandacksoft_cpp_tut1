// Program Function
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// fungsi return (pengembalian nilai)
int kali(double x, double y) {
	int a;
	a = x * y;
	return a;
}

// fungsi void (tanpa pengembalian nilai)
void perbandingan(double nilai1, double nilai2) {
	if (nilai1 < nilai2) {
		cout << nilai1 << " lebih kecil dari " << nilai2 << endl;
	} else if (nilai1 > nilai2) {
		cout << nilai1 << " lebih besar dari " << nilai2 << endl;
	} else {
		cout << nilai1 << " sama dengan " << nilai2 << endl;
	}
}

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program Function\n";
	// variable
	double nil1,nil2;
	// operasi dengan fungsi return
	cout << "Perkalian : \n";
	cout << "Masukkan nilai pertama : ";
	cin >> nil1;
	cout << "Masukkan nilai kedua : ";
	cin >> nil2;
	cout << nil1 << " x " << nil2 << " = " << kali(nil1,nil2) << endl;
	
	// jeda
	cout << "\n---------------\n\n";
	
	// operasi fungsi void
	cout << "Perbandingan : \n";
	perbandingan(nil1,nil2);
	
	// operasi dengan fungsi void
	
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}
