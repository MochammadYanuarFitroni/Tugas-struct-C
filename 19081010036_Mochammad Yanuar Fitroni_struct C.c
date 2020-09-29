#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Link github: */
struct menu{
	int makanan, minuman, harga1, harga2, hasil;
	char nama[50], tanggal[25], makan[25], minum[25];
};
typedef struct menu Warung;

void main(){

	Warung pilihan;
	
	printf("=====Warung Makan=====\n");
	printf("Masukkan nama anda: ");
	scanf(" %[^\n]%*c",&pilihan.nama);
	printf("Masukkan tanggal pemesanan: ");
	scanf(" %[^\n]%*c",&pilihan.tanggal);
	printf("\nDaftar Makanan:\n");
	printf("1. Soto Ayam\n");
	printf("2. Rawon\n");
	printf("3. Gulai\n");
	printf("Pilih Nomor Makanan: ");
	scanf("%d", &pilihan.makanan);
	printf("\nDaftar Minuman:\n");
	printf("1. Es Jeruk\n");
	printf("2. Es teh\n");
	printf("3. Teh tawar\n");
	printf("Pilih Nomor Minuman: ");
	scanf("%d", &pilihan.minuman);
	
	switch(pilihan.makanan){
		case 1:
			strcpy(pilihan.makan, "Soto Ayam");
			pilihan.harga1=10000;
			if(pilihan.minuman==1){
				strcpy(pilihan.minum, "Es Jeruk");
				pilihan.harga2=3000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else if(pilihan.minuman==2){
				strcpy(pilihan.minum, "Es teh");
				pilihan.harga2=2000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else if(pilihan.minuman==3){
				strcpy(pilihan.minum, "Teh tawar");
				pilihan.harga2=1000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else{
				strcpy(pilihan.minum, "tidak ada");
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			break;
		case 2:
			strcpy(pilihan.makan, "Rawon");
			pilihan.harga1=13000;
			if(pilihan.minuman==1){
				strcpy(pilihan.minum, "Es Jeruk");
				pilihan.harga2=3000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else if(pilihan.minuman==2){
				strcpy(pilihan.minum, "Es teh");
				pilihan.harga2=2000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else if(pilihan.minuman==3){
				strcpy(pilihan.minum, "Teh tawar");
				pilihan.harga2=1000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else{
				strcpy(pilihan.minum, "tidak ada");
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			break;
		case 3:
			strcpy(pilihan.makan, "Gulai");
			pilihan.harga1=15000;
			if(pilihan.minuman==1){
				strcpy(pilihan.minum, "Es Jeruk");
				pilihan.harga2=3000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else if(pilihan.minuman==2){
				strcpy(pilihan.minum, "Es teh");
				pilihan.harga2=2000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else if(pilihan.minuman==3){
				strcpy(pilihan.minum, "Teh tawar");
				pilihan.harga2=1000;
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			else{
				strcpy(pilihan.minum, "tidak ada");
				pilihan.hasil=pilihan.harga1+pilihan.harga2;
			}
			break;
		default:
			printf("Nomor makanan tidak tersedia");
	}
	printf("\n=====Pesanan Anda=====\n");
	printf("Nama pembeli\t\t\t\t: %s\n", pilihan.nama);
	printf("Tanggal pemesanan\t\t\t: %s\n", pilihan.tanggal);
	printf("Makanan anda\t\t\t\t: %s\n", pilihan.makan);
	printf("Minuman anda\t\t\t\t: %s\n", pilihan.minum);
	printf("Harga %s\t\t\t\t: %d\n", pilihan.makan, pilihan.harga1);
	printf("Harga %s\t\t\t\t: %d\n", pilihan.minum, pilihan.harga2);
	printf("Total semua makanan anda\t\t: %d", pilihan.hasil);
	getch();
}
