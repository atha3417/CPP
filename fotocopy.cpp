#include<iostream>
#include<conio.h>

void main()
{
int a;
menu:
cout<<“— MENU AAN FOTOCOPY —\n”;
cout<<“—        1.PEMBAYARAN      —\n”;
cout<<“—                2.EXIT              —\n”;
cout<<“————————————–\n”;
cout<<“Pilih menu (1-2): “;
cin>> a;
if(a==1)
goto pembayaran;
else if(a==2)
goto exit;
else
cout<<“\n”;
cout<<“PILIHAN TIDAK TERSEDIA \n”<<“TEKAN ENTER DAN COBA LAGI”;
getch();
goto menu;

pembayaran:
{
long int n,m,harga,total,kembali,jawab;

cout<<“Masukkan Jumlah Lembar Fotocopy = “;
cin>>n;

if(n>=1 && n<=5)
{
harga=400;
}
else if(n>=6 && n<=20)
{
harga=350;
}
else if(n>=21 && n<=50)
{
harga=300;
}
else if(n>50)
{
harga=250 ;
}
else
{
cout<<“Salah memasukkan angka”;
}

total=n*harga;
cout<<“————————“<<endl;
cout<<“Harga perlembar = “<<harga<<endl;
cout<<“Total Bayar = “<<total<<endl;

cout<<“————————“<<endl;
cout<<“Uang tunai = “;
cin>> m ;

kembali=m-total;
cout<<“uang kembali = “<<kembali<<endl;
cout<<“————————“<<endl<<endl;
cout<<“Tekan Enter “<<endl<<endl;

getch ();

cout<<“Kembali ke menu ? \n”;
cout<<“1. ya \n”;
cout<<“2.tidak/exit \n”;
cout<<“Masukin Pilihan : “;
cin>>jawab;
if(jawab==1)
goto menu;
if(jawab==2)
goto exit;
else
cout<<“\n”;
cout<<“Kesalahan Menginput “<<endl<<“Program Akan Berhenti”;
getch();
goto exit;
}

exit:

clrscr();
cout<<“————————– \n”;
cout<<“— TERIMA KASIH — \n”;
cout<<“————————– \n”;
}
