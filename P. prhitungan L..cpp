#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define phi 3.14

using namespace std;

int main()	{
	int nomor, nilai;
	float r,d,k,LL,t,volume,luas;
	
	do {
		system("cls");
		
		cout << "===== MENU HITUNGAN =====" << endl;
		cout << "1. program menghitung luas lingkaran" << endl;
		cout << "2. program menghitung keliling lingkaran" << endl;
		cout << "3. program menghitung diameter lingkaran" << endl;
		cout << "4. program menghitung jari-jari lingkaran" << endl;
		cout << "5. program menghitung luas tabung" << endl;
		cout << "6. program menghitung volume tabung" << endl;
		cout << "7. program menghitung grade nilai" << endl;
		cout << "8. KELUAR" << endl;	
		cout << "masukkan nilai menu = " << endl;
		cin >> nomor;
		
		system ("cls");
		
		if ( nomor ==1)	{
			cout << "masukkan jari-jari lingkaran = ";
			cin >> r;
			
			LL = phi * r * r;
			cout << "luas lingkaran = " << LL << endl;
		}
		
		if ( nomor ==2)	{
			cout << "masukkan jari-jari lingkaran = ";
			cin >> r;
			
			k = 2 * phi * r;
			cout << "keliling lingkaran = " << k << endl;
		}
		
		if ( nomor ==3)	{
			cout << "masukkan jari-jari lingkaran = ";
			cin >> r;
			
			d = 2 * r;
			cout << "diameter lingkaran = " << d << endl;
		}
		
		if ( nomor ==4)	{
			cout << "masukkan diameter lingkaran = ";
			cin >> d;
			
			r = d/2;
			cout << "jari-jari lingkaran = " << r << endl;
		}
		
		if ( nomor ==5)	{
			cout << "masukkan jari-jari tabung = ";
			cin >> r;
			cout << "masukkan tinggi tabung = ";
			cin >> t;
			
			luas = phi * r * 2 * t;
			cout << "luas tabung = " << luas << endl;
		}
		
			if ( nomor ==6)	{
			cout << "masukkan jari-jari tabung = ";
			cin >> r;
			cout << "masukkan tinggi tabung = ";
			cin >> t;
			
			volume = phi * r * r * t;
			cout << "volume tabung = " << volume << endl;
		}
		
		if ( nomor ==7)	{
			cout << "masukkan nilai ujian = ";
			cin >> nilai;
			switch ( nilai / 10)  {
				case 10:
				case 9:
				case 8:
					cout << "A" << endl;
					break;
					
				case 7:
					cout << "B" << endl;
					break;
					
				case 6:
				case 5:
					cout << "C" << endl;
					break;
					
				case 4:
				case 3:
					cout << "D" << endl;
					break;
					
				case 2:
				case 1:
				case 0:
					cout << "E ( anda harus mengulang semester depan) " << endl;
					break;
					
				default:
					cout << "Nilai yang anda masukkan salah,coba lagi !" << endl;
		}
	}
	
	getch ();
	
  } while ( nomor != 8 );
  
  return 0;
}
