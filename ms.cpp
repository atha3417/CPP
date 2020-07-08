#include "stdio.h"
#include "conio.h"

int pilMember,pilMenu,pilMakanan,pilMinuman;
int bayar =0,bayar2=0,uangPembeli,kembalian,total;

void makanan(){
  makan:printf("\n|==|================|========|\n");
          printf("|No|  food          |price   |\n");
        printf("|==|================|========|\n");
        printf("|1.|gado-gado       |Rp.4000 |\n");
        printf("|2.|pecel           |Rp.5500 |\n");
        printf("|3.|nasi kuning     |Rp.7000 |\n");
        printf("|4.|selesai memilih |        |\n");
        printf("|==|================|========|\n");
        printf("inputkan pilihan :");
        scanf("%d",&pilMakanan);
    switch(pilMakanan){
        case 1:{
            printf("Makanan Akan segera di antar \n");
            printf("Tekan enter jika mau milih keembali menu makanan");
            bayar+=+4000;
            getch();
            clrscr();
            goto makan;
            }break;
        case 2:{
            printf("Makanan Akan segera di antar \n");
            printf("Tekan enter jika mau milih keembali menu makanan");
            bayar+=+5500;
            getch();
            clrscr();
            goto makan;
            }break;
        case 3:{
            printf("Makanan Akan segera di antar \n");
            printf("Tekan enter jika mau milih keembali menu makanan");
            bayar+=+7000;
            getch();
            clrscr();
            goto makan;
            }break;
        case 4:{
            clrscr();
            break;
            }break;
        default : printf(" pilihan yang anda masukan tidak ada di list menu");break;
            clrscr();
            goto makan;
    }
}



void minuman(){
  minum:printf("\n|==|================|=========|\n");
          printf("|No|   Drink        |  price  |\n");
        printf("|==|================|=========|\n");
        printf("|1.| JusKalong      |Rp.2500  |\n");
        printf("|2.| tehKalong      |Rp.1500  |\n");
        printf("|3.| kopiKalong     |Rp.2000  |\n");
        printf("|4.| selesai memilih|         |\n");
        printf("|==|================|=========|\n");
        printf("inputkan pilihan :");
        scanf("%d",&pilMinuman);
    switch(pilMinuman){
        case 1:{
            printf("Minuman Akan segera di antar \n");
            printf("Tekan enter jika mau milih keembali menu minuman");
            bayar2+=+2500;
            getch();
            clrscr();
            goto minum;
            }break;
        case 2:{
            printf("Minuman Akan segera di antar \n");
            printf("Tekan enter jika mau milih keembali menu minuman");
            bayar2+=+1500;
            getch();
            clrscr();
            goto minum;
            }break;
        case 3:{
            printf("Minuman Akan segera di antar \n");
            printf("Tekan enter jika mau milih keembali menu minuman");
            bayar2+=+2000;
            getch();
            clrscr();
            goto minum;

            }break;
        case 4:{
            clrscr();
            break;
            }break;
        default :
            printf(" pilihan yang anda masukan tidak ada di list menu");
            clrscr();
            goto minum;
    }
}




void bannerCafe(){
    printf("        Warung Cafe Arfin   \n");
    printf("      Selamat Datang di Cafe \n");
    printf("         Insya'allah Cafe   \n");
    printf("   <=========================>\n");

    }

void pembayaran(){
    pembayar:printf("total pembelian Makanan   :");
    printf("Rp.%d,-",bayar);
    printf("\ntotal pembelian Minuman   :");
    printf("Rp.%d,-",bayar2);
    total=bayar+bayar2;
    printf("\nTOTAL ____________________:Rp.%d,- \n",total);
    printf("Jumlah uang Pembeli       :Rp.");
    scanf("%d",&uangPembeli);
    printf("--------------------  \n");
    kembalian=uangPembeli-total;
    printf("kembalian                 :Rp.%d,- \n",kembalian);
    printf("\n\n\n\t\t\tTerimakasih");
    getch();
    clrscr();
}



void main(){
    menu :
        bannerCafe();
        printf("*Menu\n");
        printf(">----<\n");
        printf("1. List makanan \n");
        printf("2. List Minuman \n");
        printf("3. bayar  \n");
        printf("masukan pilihan :");
        scanf("%d",&pilMenu);
    switch(pilMenu){
        case 1:{
            clrscr();
             bannerCafe();
             makanan();
             goto menu;
            }break;
        case 2:{
            clrscr();
             bannerCafe();
              minuman();
            goto menu;
            }break;
        case 3:{
            clrscr();
            pembayaran();
            goto menu;
            break;}
         default : printf("pilihan yang anda masukan tidak ada di list menu ");
    }
}