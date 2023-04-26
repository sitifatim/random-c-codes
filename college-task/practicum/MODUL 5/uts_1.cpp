#include <stdio.h>
#include <ctype.h>

int main()
{
	// deklarasi variabel dengan nilai
	char jenis_sampah;
	char status;
	char nama[50];
	char tanggal[10];
	float bonus, total_upah, bonus_awal, total, bonus_tambahan, upah;
	float  berat_sampah;
	
	//menampilkan info sampah
	printf(" =============== Daftar Sampah ===================\n");
	printf(" Sampah Kertas (Kode = 1) : Rp. 2000\n");
	printf(" Sampah Plastik (Kode = 2): Rp. 1800\n");
	printf(" Sampah Logam (Kode = 3)  : Rp. 5700\n");
	printf(" Sampah Kaca (Kosde = 4)  : Rp. 4300\n");
	//fungsi input
	printf("============== Input Informasi ===============\n");
	printf(" Nama Anda                : ");
	scanf("%[^\n]s", &nama);
	getchar();
	printf(" Tanggal Transaksi        : ");
	scanf("%s", &tanggal);
	getchar();
	printf(" Berat Sampah             : ");
	scanf("%f", &berat_sampah);
	getchar();
	printf("Jenis Sampah (1/2/3/4)    : ");
	scanf("%c", &jenis_sampah);
	getchar();
	printf(" Apakah Anda Anggota (Y/T): ");
	scanf("%c", &status);
	getchar();
	
	//cek jenis sampah
	switch(jenis_sampah){
		case '1':
			total = berat_sampah*2000;
			break;
		case '2':
			total = berat_sampah*1800;
			break;
		case '3':
			total = berat_sampah*5700;
			break;
		case '4':
			total = berat_sampah*4300;
			break;
		default:
			printf("invalid input");
			break;
	}
	
	//cek status keanggotaan
	switch(toupper(status)){
		case 'Y':
			bonus = 0.15 * total;
			if(berat_sampah > 7) {
				upah = total + bonus;
				bonus_tambahan = 0.05*upah;
				total_upah = upah + bonus_tambahan;
			} else {
				total_upah = total +bonus;
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
				total_upah = total + 0;
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
	printf(" Bonus awal              : %f \n", bonus);
	printf(" Bonus tambahan          : %f\n", bonus_tambahan);
	printf(" Total Upah              : %f \n", total_upah);
	printf("===================== Terimakasih ===============\n");
	
	return 0;
}
