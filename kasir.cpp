#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;

string warna(unsigned short warna){
 HANDLE lalala = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(lalala,warna);
 return "";
 
}

void linear(int x, int y){
 COORD kordinat = {x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), kordinat);
}

void border(){ //Tabel
 warna(10);
 char k = 219;
 for(int a=0; a<50; a++){
  linear(a,0);
  cout<<k;
 }
 for(int b=1; b<24; b++){
  linear(0,b);
  cout<<k;
 }
 for(int c=0; c<50; c++){
  linear(c,24);
  cout<<k;
 }
 for(int d=0; d<25; d++){
  linear(50,d);
  cout<<k;
 }
 for(int e=1; e<51; e++){
  linear(e,4);
  cout<<k;
 }
 for(int f=5; f<21; f++){
  linear(22,f);
  cout<<k;
 }
 for(int g=0; g<51; g++){
  linear(g,20);
  cout<<k;
 }
 for(int h=5; h<20; h++){
  linear(34,h);
  cout<<k;
 }
}

void header(){
 linear(19,2);
 cout<<"KASIR KAMBING";
}

void menu(){
 linear(2,6);
 cout<<"1. KAMBING BAKAR"<<endl;
 linear(2,8);
 cout<<"2. KAMBING GULING"<<endl;
 linear(2,10);
 cout<<"3. KAMBING PENYET"<<endl;
 linear(2,12);
 cout<<"4. KAMBING GULAI"<<endl;
 linear(2,14);
 cout<<"5. KAMBING RENDANG"<<endl;
 linear(2,16);
 cout<<"6. KAMBING GORENG"<<endl;
 linear(2,18);
 cout<<"7. KAMBING KRISPI"<<endl;
}

void harga_dan_jumlah(){
 float KB, KG, KP, KGU, KR, KGO, KPE;
 long double total,bayar,kembali;
 int JKB, JKG, JKP, JKGU, JKR, JKGO, JKPE;
 
 KB = 10000;
 KG = 15000;
 KP = 9000;
 KGU = 13000;
 KR = 16000;
 KGO = 8000;
 KPE = 12000;
 
 linear(24, 6);
 cout<<"Rp. "<<KB<<endl;
 linear(24, 8);
 cout<<"Rp. "<<KG<<endl; 
 linear(24, 10);
 cout<<"Rp. "<<KP<<endl;
 linear(24, 12);
 cout<<"Rp. "<<KGU<<endl;
 linear(24, 14);
 cout<<"Rp. "<<KR<<endl;
 linear(24, 16);
 cout<<"Rp. "<<KGO<<endl;
 linear(24, 18);
 cout<<"Rp. "<<KPE<<endl;
 
 linear(36, 6);
 cout<<"Jml : "<<endl;
 linear(36, 8);
 cout<<"Jml : "<<endl;
 linear(36, 10);
 cout<<"Jml : "<<endl;
 linear(36, 12);
 cout<<"Jml : "<<endl;
 linear(36, 14);
 cout<<"Jml : "<<endl;
 linear(36, 16);
 cout<<"Jml : "<<endl;
 linear(36, 18);
 cout<<"Jml : "<<endl;
 
 linear(46,6);
 cout<<"Pcs"<<endl;
 linear(46,8);
 cout<<"Pcs"<<endl;
 linear(46,10);
 cout<<"Pcs"<<endl;
 linear(46,12);
 cout<<"Pcs"<<endl;
 linear(46,14);
 cout<<"Pcs"<<endl;
 linear(46,16);
 cout<<"Pcs"<<endl;
 linear(46,18);
 cout<<"Pcs"<<endl;
 
 warna(11);
 linear(24,21);
 cout<<"Total   = "<<endl;
 linear(24,22);
 cout<<"Bayar   = "<<endl;
 linear(24,23);
 cout<<"Kembali = "<<endl;
 
 
 warna(10);
 linear(42,6);
 cin>>JKB;
 linear(42,8);
 cin>>JKG;
 linear(42,10);
 cin>>JKP;
 linear(42,12);
 cin>>JKGU;
 linear(42,14);
 cin>>JKR;
 linear(42,16);
 cin>>JKGO;
 linear(42,18);
 cin>>JKPE;
 
 linear(34,21);
 total = (KB * JKB) + (KG * JKG) + (KP * JKP) + (KGU * JKGU) + (KR * JKR) + (KGO * JKGO) + (KPE * JKPE) ;
 warna(8);
 cout<<"Rp. ";cout<<total<<",-";
 
 linear(34,22);
 cout<<"Rp. ";cin>>bayar;
 
 linear(34,23);
 kembali = bayar - total;
 cout<<"Rp. "<<kembali<<",-";
 
 
 
}

void keterangan(){
 linear(53,2);
 cout<<"KETERANGAN : ";
 linear(55,4);
 cout<<" tulis jumlah pesanan";
 linear(55,5);
 cout<<" pada setiap menu";
 linear(55,6);
 cout<<" yang tertera.";
 linear(55,7);
 cout<<" jika menu tersebut";
 linear(55,8);
 cout<<" tidak dipesan,";
 linear(55,9);
 cout<<" maka tulis saja";
 linear(55,10);
 cout<<" angka '0' pada,";
 linear(55,11);
 cout<<" kolom jml menu";
 linear(55,12);
 cout<<" tersebut";
}

int main(){
 system("title Kasir Kambing");
 system("CLS");
 keterangan();
 border();
 header();
 menu();
 harga_dan_jumlah();
 getch();
 main();
}
