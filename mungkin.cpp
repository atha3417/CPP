#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
                double  menuA, menuB, jumlah_menuA, jumlah_menuB, diskon,bayar,kembalian,
                total_hrg_menuA, total_hrg_menuB, harga_menu1, harga_menu2, total_pembayaran;
               
               
                cout<<"================================================"<<endl;
                cout<<"                                >> TUGAS ALPRO II MEMBUAT PROGRAM KASIR <<" <<endl;
                cout<<endl;
                cout<<" Nama   : Freditya Margianto"<<endl;
                cout<<" Nim      : 5140411150"<<endl;
                cout<<" Kelas    : TI-C"<<endl;
                cout<<endl;
                cout<<"================================================="<<endl;
               
                //Paket
               
                cout<<"MENU A :"<<endl;
                cout<<"1. Mi ayam biasa"<<endl;
                cout<<"2. Es Teh"<<endl;
                cout<<endl;
                cout<<"MENU B :"<<endl;
                cout<<"1. Mi ayam Bakso"<<endl;
                cout<<"2. Es Teh"<<endl;
                cout<<"================================================"<<endl;
                cout<<endl;
               
                //jumlah paket
               
                cout<<"Masukan jumlah pembelian untuk menu A : ";
                cin>>jumlah_menuA;
                cout<<"                Harga paket menu A : Rp.";
                cin>>menuA;
                harga_menu1=menuA*jumlah_menuA;
                cout<<"                Total harga menu A = Rp."<<harga_menu1<<endl;
                cout<<endl;
                cout<<"Masukan jumlah pembelian untuk menu B : ";
                cin>>jumlah_menuB;
                cout<<"                Harga paket menu B : Rp.";
                cin>>menuB;
                harga_menu2=menuB*jumlah_menuB;
                cout<<"                Total Harga menu B = Rp."<<harga_menu2<<endl;
               
                //menu A
                                {
                                                if(jumlah_menuA>=10&&jumlah_menuA<15)
                                                {
                                                                diskon=harga_menu1*5/100;
                                                                total_hrg_menuA=harga_menu1-diskon;
                                                                cout<<endl;
                                                                cout<<"Total pembayaran menu A = "<<harga_menu1<<"* 5% = Rp."<<total_hrg_menuA<<endl;             
                                                }
                                                else if(jumlah_menuA>=15)
                                                {
                                                                diskon=harga_menu1*10/100;
                                                                total_hrg_menuA=harga_menu1-diskon;
                                                                cout<<endl;
                                                                cout<<"Total pembayaran menu A = "<<harga_menu1<<"* 10% = Rp."<<total_hrg_menuA<<endl;
                                                }
                                                else
                                                {
                                                                total_hrg_menuA=harga_menu1;
                                                                cout<<endl;
                                                                cout<<"Total pembayaran menu A = Rp."<<total_hrg_menuA<<endl;;
                                                                cout<<"Pembelian ini tidak mendapatkan diskon"<<endl;
                                                                cout<<endl;
                                                }
                                               
                                }
                //menu B
                                {
                                                if(jumlah_menuB>=10&&jumlah_menuB<15)
                                                {
                                                                diskon=harga_menu2*5/100;
                                                                total_hrg_menuB=harga_menu2-diskon;
                                                                cout<<endl;
                                                                cout<<"Total pembayaran menu B = "<<harga_menu2<<"* 5% = Rp."<<total_hrg_menuB<<endl;             
                                                }
                                                else if(jumlah_menuB>=15)
                                                {
                                                                diskon=harga_menu2*10/100;
                                                                total_hrg_menuB=harga_menu2-diskon;
                                                                cout<<endl;
                                                                cout<<"Total pembayaran menu B = "<<harga_menu2<<"* 10% = Rp."<<total_hrg_menuB<<endl;
                                                }
                                                else
                                                {
                                                                total_hrg_menuB=harga_menu2;
                                                                cout<<endl;
                                                                cout<<"Total pembayaran menu B = Rp."<<total_hrg_menuB<<endl;
                                                                cout<<"Pembelian ini tidak mendapatkan diskon"<<endl;
                                                }
                                                cout<<"===================================================="<<endl;
                                }
                //total;
                                cout<<endl;
                                total_pembayaran=total_hrg_menuA+total_hrg_menuB;
                                cout<<"Total semua yang harus dibayar = Rp."<<total_pembayaran<<endl;
                                cout<<"uang pembayaran = Rp.";
                                cin>>bayar;
                                kembalian=bayar-total_pembayaran;
                                cout<<"kembalian = Rp."<<kembalian;
               
                return 0;

}
