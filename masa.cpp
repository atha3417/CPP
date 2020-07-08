#include <iostream>
using namespace std;
int main() 
{
    awal:
    int J_produk;
    char nama [30];
    char pil,yt;
    cout << "                       ****Toko NAF FROZEN****                   "<< endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "KODE        Nama Produk Belfoods         Harga Produk           " << endl;
    cout << " 1          Nugget 170 g                 Rp. 10.000             " << endl;
    cout << " 2          Sosis 200 g                  Rp. 10.000             " << endl;
    cout << " 3          Bakso Ayam 100 g             Rp. 10.000             " << endl;
    cout << "---------------------------------------------------------------- " << endl;
    cout << "Nama                         : " ;cin>>nama;
    cout << "Kode Produk Belfoods (1-12)  : " ;cin>>pil;
    cout << "Jumlah produk                : " ;cin>>J_produk;
    system("cls");
    
  if (pil==1) {
    int h_produk,tot,bay,balik;
    h_produk=10000;
    tot=h_produk*J_produk;
    cout << "Nama Pembeli                   : " <<nama<< endl;
    cout << "Nama Produk Belfoods           : Nugget 170 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }
    
    else {
    cout<<"Tidak Bisa Dipersoses";
    cout<<endl;
    }
   
    cin.get();
    return 0;
}

