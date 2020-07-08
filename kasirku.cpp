#include <iostream>
using namespace std;
int main() 
{
    awal:
    int J_produk;
    int pil;
    char nameID [30];
    char yt;
    cout << "                              ****TOKO NAF FROZEN****                           "<< endl;
    cout << "                   ****RUKO TAMAN KEBALEN BLOK E1 NO. 35****                    "<< endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "  KODE               Nama Produk Belfoods                Harga Produk           " << endl;
    cout << "   1                Nugget Ayam 170 g                   Rp. 10.000             " << endl;
    cout << "   2                Sosis  Ayam 200 g                   Rp. 10.000             " << endl;
    cout << "   3                Bakso  Ayam 100 g                   Rp. 10.000             " << endl;
    cout << "   4             Kentang Shoestring 200 g               Rp. 10.000             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   5                Nugget Ayam 250 g                   Rp. 12.000             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   6                Sosis Ayam 375 g                    Rp. 15.000             " << endl;
    cout << "   7                Bakso Mini 500 g                    Rp. 15.000             " << endl;
    cout << "   8               Nugget Ayam Koin 250 g               Rp. 15.000             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   9            Nugget Ayam Panjang 170 g               Rp. 15.500             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   0               Bakso Mini Isi 50                   Rp. 16.500             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   11               Sosis Ayam 500 g                    Rp. 18.000             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   12            Kentang Shoestring 500 g               Rp. 19.000             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   13             Nugget Ayam Ceria 250 g               Rp. 22.000             " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "   14            Ayam Golden Fillet 250 g               Rp. 22.000             " << endl;
    cout << "Nama/ID pembeli              : " ;cin>>nameID;
    cout << "Kode Produk Belfoods (1-14)  : " ;cin>>pil;
    cout << "Jumlah produk                : " ;cin>>J_produk;
    system("cls");
    
  if (pil==1) {
    int h_produk,tot,bay,balik;
    h_produk=10000;
    tot=h_produk*J_produk;
    cout << "Nama/ID Pembeli                : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Sosis Ayam 200 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==2) {
    int h_produk,tot,bay,balik;
    h_produk=10000;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Bakso Ayam 100 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==3) {
    int h_produk,tot,bay,balik;
    h_produk=10000;
    tot=h_produk*J_produk;
    cout << "Nama/ID Pembeli                : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Bakso  Ayam 100 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==4) {
    int h_produk,tot,bay,balik;
    h_produk=10000;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Kentang Shoestring 200 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==5) {
    int h_produk,tot,bay,balik;
    h_produk=12000;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Nugget Ayam 250 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==6) {
    int h_produk,tot,bay,balik;
    h_produk=15000;
    tot=h_produk*J_produk;
    cout << "Nama/ID Pembeli                : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Sosis Ayam 375 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==7) {
    int h_produk,tot,bay,balik;
    h_produk=15000 ;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Bakso Mini 500 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==8) {
    int h_produk,tot,bay,balik;
    h_produk=15000;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Nugget Ayam Koin 250 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==9) {
    int h_produk,tot,bay,balik;
    h_produk=15500;
    tot=h_produk*J_produk;
    cout << "Nama/ID Pembeli                : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Nugget Ayam Panjang 170 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==10) {
    int h_produk,tot,bay,balik;
    h_produk=16500 ;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Bakso Mini Isi 50" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==11) {
    int h_produk,tot,bay,balik;
    h_produk=18.000;
    tot=h_produk*J_produk;
    cout << "Nama/ID Pembeli                : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Sosis Ayam 500 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==12) {
    int h_produk,tot,bay,balik;
    h_produk=19000 ;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Kentang Shoestring 500 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==13) {
    int h_produk,tot,bay,balik;
    h_produk=22000;
    tot=h_produk*J_produk;
    cout << "ID Pembeli                     : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           : Nugget Ayam Ceria 250 g" << endl;
    cout << "Harga Produk                   : " <<h_produk<< endl;
    cout << "Jumlah Produk                  : " <<J_produk << endl;
    cout << "Total Bayar                    : Rp." <<tot << ",-" << endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar   = Rp. " ;cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }

    else if (pil==14) {
    int h_produk,tot,bay,balik;
    h_produk=28500;
    tot=h_produk*J_produk;
    cout << "Nama/ID Pembeli                : " <<nameID<< endl;
    cout << "Nama Produk Belfoods           :  Ayam Golden Fillet 250 g" << endl;
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
    cout<<"Tidak Dapat Diproses";
    cout<<endl;
    }
    cout<<endl;
    cout<<"Apakah Sobat Ingin Coba Lagi ? [Y/T] : ";
    cin>>yt;
    cout<<endl;

    if(yt=='Y' || yt=='y')
    {goto awal;}
    if(yt=='T' || yt=='t')
    {goto selesai;}
    selesai:

    cin.get();
    return 0;
}

