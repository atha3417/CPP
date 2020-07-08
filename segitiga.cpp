#include <iostream>
using namespace std;

// menghitung alas segitiga

int main()
{
	float a,t,LS,at;
	
	cout << "rumus luas segitiga = (alas x tinggi) : 2\n";
	cout << "masukkan alas segitiga = ";
	cin >> a;
	cout << "masukkan tinggi segitiga = ";
	cin >> t;
	
	at = a*t;
	LS = (a*t)/2;
	
	cout << "hasil dari alas x tinggi = " << at;
	cout << "\nluas segitiga adalah " << LS;
	cout << "\nterima kasih telah menggunakan kalkulator ini ";
	cout << "\nkalkulator ini dibuat oleh atha ";
	return 0;
}
