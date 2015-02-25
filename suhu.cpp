// program mengubah celcius ke fahrenheit
// author: Hernanda Cahyo Kurniawan
// twitter: @NandackCahyo
// http://hernandack.hol.es
// Fahrenheit = Celcius * (212-32)/100 + 32
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	// header
	cout << "Program converter Celcius ke Fahrenheit" << endl;
	// variable utama
	double celcius, fahrenheit;
	// Memasukkan nilai celcius
	cout << "Masukkan nilai celcius : ";
	cin >> celcius;
	// memproses pengubahan suhu
	fahrenheit = celcius * (212-32)/100 + 32;
	// tampilkan fahrenheit
	cout << celcius << " derajat celcius = " << fahrenheit << " derajat fahrenheit." << endl;
	// menunggu user siap untuk menutup aplikasi
	system("pause");
	
	return 0;
}
