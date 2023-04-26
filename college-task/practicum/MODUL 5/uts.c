#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	// deklarasi variabel dengan nilai
	char jenis_sampah;
	//int plastik = 2;
	//int logam = 3;
	//int kaca = 4;

	char status, nama[50], tanggal[10];
	int bonus, total_upah, berat_sampah, bonus_awal, total, bonus_tambahan;

	//menampilkan info sampah
	printf(" =============== Daftar Sampah ===================\n");
	printf(" Sampah Kertas (Kode = 1): Rp. 2000\n");
	printf(" Sampah Plastik (Kode = 2): Rp. 1800\n");
	printf(" Sampah Logam (Kode = 3): Rp. 5700\n");
	printf(" Sampah Kaca (Kosde = 4): Rp. 4300\n");
	//fungsi input
	printf("============== Input Informasi ===============\n");
	printf(" Nama Anda                    : ");
	scanf("%[^\n]s", &nama);
	getchar();
	printf(" Apakah Anda Anggota (Y/T)    : ");
	scanf("%c", &status);
	getchar();
	printf(" Tanggal Transaksi(DD/MM/YYYY): ");
	scanf("%s", &tanggal);
	getchar();
	printf(" Berat Sampah                 : ");
	scanf("%f", &berat_sampah);
	getchar();
	printf("Jenis Sampah (1/2/3/4)        : ");
	scanf("%c", &jenis_sampah);
	getchar();

	//cek jenis sampah
	if (jenis_sampah == '1') {
		total = berat_sampah*2000;
	} else if (jenis_sampah == '2') {
		total = berat_sampah*1800;
	} else if (jenis_sampah == '3') {
		total = berat_sampah*5700;
	} else if (jenis_sampah == '4'){
		total = berat_sampah*4300;
	} else{
		printf("invalid input");
	}

	//cek status keanggotaan
	switch(toupper(status)){
		case 'Y':
			bonus_awal = 0.15 * total;
			if(berat_sampah > 7) {
				bonus_tambahan = 0.05*total;
				bonus = bonus_awal + bonus_tambahan;
				total_upah = total + bonus_awal;
			} else {
				total_upah = total +bonus_awal;
			}
			break;
		case 'T':
			if(berat_sampah >= 5 && berat_sampah<9) {
				bonus = 0.07*total;
				total_upah = total + bonus;
			} else if (berat_sampah >= 9) {
				bonus = 0.1*total;
				total_upah = total + bonus;
			} else {
				bonus = 0;
				total_upah = total + bonus;
			}
			break;
	}

	//tampilan output
	printf("===================== Hasil Transaksi===============\n");
	printf(" Nama Penyetor           : %s \n", nama);
	printf(" Tanggal Transaksi       : %s \n", tanggal);
	printf(" Status Keanggotaan (Y/T): %c \n", status);
	printf(" Jenis Sampah            : %c \n", jenis_sampah);
	printf(" Berat Sampah            : %f \n", berat_sampah);
	printf(" Bonus                   : %f \n", bonus);
	printf(" Total Upah              : %f \n", total_upah);
	printf("===================== Terimakasih ===============\n");

	return 0;
}


