// Program array of char
// memahami jumping fungsi dengan prototype
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// deklarasi fungsi prototype (jumping)
void tampilkan(char stringArray[], int ukuran);
void ubah(char stringArray[], int indeks, char charBaru);

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Array of char\n";
	// variable
	char nama[] = {'H','E','R','N','A','N','D','A'};
	// isi char awal, tampil
	tampilkan(nama,8);
	cout << endl;
	// mengubah char pada indeks ke 2 dengan char L
	ubah(nama,2,'L');
	// isi char setelah diubah, tampil
	tampilkan(nama,8);
	cout << endl;
	// menunggu user siap untuk exit
	system("pause");
	return 0;
}

// jumping fungsi prototype disini
void tampilkan(char stringArray[], int ukuran) {
	// tampilkan setiap isi array
	for (int i=0; i < ukuran; i++) {
		cout << stringArray[i] << " ";
	}
}

void ubah(char stringArray[], int indeks, char charBaru) {
	stringArray[indeks] = charBaru;
}
