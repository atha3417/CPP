#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define phi 3.14

using namespace std;

int main()	{
	int nomor, nilai;
	float r,t,luas,volume;
	
	do {
		system("cls");
		
		cout << "===== MENU HITUNGAN =====" << endl;
		cout << "1. program menghitung luas tabung" << endl;
		cout << "2. program menghitung volume tabung" << endl;
		cout << "3. program menghitung grade nilai" << endl;
		cout << "4. KELUAR" << endl;	
		cout << "masukkan nilai menu = " << endl;
		cin >> nomor;
		
		system ("cls");
		
		if ( nomor ==1)	{
			cout << "masukkan jari-jari tabung = ";
			cin >> r;
			cout << "masukkan tinggi tabung = ";
			cin >> t;
			
			luas = phi * r * 2 * t;
			cout << "luas tabung = " << luas << endl;
		}
		
		if ( nomor ==2)	{
			cout << "masukkan jari-jari tabung = ";
			cin >> r;
			cout << "masukkan tinggi tabung = ";
			cin >> t;
			
			volume = phi * r * r * t;
			cout << "volume tabung = " << volume << endl;
		}
		
		if ( nomor ==3)	{
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
	
  } while ( nomor != 4 );
  
  return 0;
}
	
	

	
			
			
			
		
	



				
				
				
			
		
		
	

