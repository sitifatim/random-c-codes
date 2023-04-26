#include <stdio.h>

int main()
{
    char nama[50];
    int usia;
    int berat, tinggi, pendapatan;
    char alamat[50];
    char golongan;

    //memasukan fungsi inputan
    //fungsi gets
    printf("Input Nama Pelanggan       : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf("Input Usia (th)            : ");
    scanf("%d", &usia);
    getchar();
    printf("Input Berat (kg)           : ");
    scanf("%d", &berat);
    getchar();
    printf("Input Tinggi (cm)          : ");
    scanf("%d", &tinggi);
    getchar();
    printf("Input Alamat Pelanggan     : ");
    scanf("%[^\n]s", &alamat);
    getchar();
    printf("Input Golongan (A/B/C/D)   : ");
    scanf("%c", &golongan);
    getchar();
    printf("Input Pendapatan/bulan(RP.): ");
    scanf("%d", &pendapatan);
    getchar();

    //tampilan output
    printf("==================== Cetak Ouput ====================\n");
    printf("Nama Pelanggan       : %s \n", nama);
    printf("Usia Pelanggan       : %d \n", usia);
    printf("Berat                : %d \n", berat);
    printf("Tinggi               : %d \n", tinggi);
    printf("Alamat               : %s \n", alamat);
    printf("Golongan             : %c \n", golongan);
    printf("Pendapatan           : %d \n", pendapatan);


    return 0;
}
