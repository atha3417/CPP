#include<iostream>
using namespace std;
main()
{
int x,produk1=10000,produk2=20000,jumlah1,jumlah2,total,bayar,tunai,sisa,diskon;
string barang1,barang2,barang3;

    cout<<"============================================"<<endl;
    cout<<"  Program Kasir Sederhana Toko SerbaBebas"<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"Masukkan Nama Produk 1  : "; cin>>barang1;
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah1=x*produk1;
   cout<<"Total Harga   : Rp. "<<jumlah1<<endl;cout<<endl; 

   cout<<"Masukkan Nama Produk 2  : "; cin>>barang2;
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah2=x*produk2;
   cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl; 

   bayar=jumlah1+jumlah2;
   cout<<endl; 
   cout<<"============================================"<<endl;
   cout<<"Sub Total   : Rp. "<<bayar<<endl;

if(bayar>50000)
{
 diskon=0.10*bayar;
 cout<<"Diskon 10%, diskon sebesar : Rp. "<<diskon<<endl;
 total=bayar-diskon;
 cout<<"Total    : Rp. "<<total<<endl;
}
else
if(bayar<50000)
{
 diskon=0;
 cout<<"Diskon 0%, diskon sebesar : Rp. "<<diskon<<endl;
 total=bayar;
 cout<<"Total    : Rp. "<<total<<endl;
}
 cout<<"============================================"<<endl;
 cout<<"Uang tunai   : Rp. ";
 cin>>tunai;
 sisa=tunai-total;
 cout<<"Kembalian   : Rp. "<<sisa<<endl;
 cout<<endl; 
}


