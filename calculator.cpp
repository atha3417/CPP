#include <iostream>

using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;

	cout << "selamat datang di calculator \n \n";

	// memasukkan input dari user
	cout << "masukkan nilai pertama: ";
	cin >> a;
	cout << "pilih operator +,-,/,*: ";
	cin >> aritmatika;
	cout << "masukkan nilai kedua: ";
	cin >> b;

	cout << "\nperhitungan: ";
	cout << a << aritmatika << b;

	if (aritmatika == '+'){
		hasil = a + b;
	} else if (aritmatika == '-'){
		hasil = a - b;
	} else if (aritmatika == '/'){
		hasil = a / b;
	} else if (aritmatika == '*'){
		hasil = a * b;
	} else {
		cout << "operator yang anda masukkan salah" << endl;
	}
	
	cout << " = " << hasil << endl;

	cin.get();
	return 0;
}