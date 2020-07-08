#include <iostream>
using namespace std;

// rumus menghitung luas jajar genjang

int main()
{
	float a,t,LJ;
	
	cout << "rumus jajar genjang = alas x tinggi\n";
	cout << "silahkan masukkan alas jajar genjang = ";
	cin >> a;
	cout << "silahkan masukkan tinggi jajar genjang = ";
	cin >> t;
	
	LJ = a*t;
	
	cout << "luas jajar genjang adalah " << LJ;
	cout << "\nterima kasih telah mencoba kalkulator ini";
	return 0;
} 
