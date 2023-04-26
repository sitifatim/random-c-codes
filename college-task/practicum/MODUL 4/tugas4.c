#include<stdio.h>

int main()
{
    //deklarasi variabel
    char nama[50];
    float kerja;
    char gol;
    const int tunjangan = 300000;
    int jm_pes;
    float pesangon;
    int gaji_pokok;
    float upah_pb;
    //membuat input
    printf("Nama karyawan   : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf("Masa Kerja      : ");
    scanf("%f", &kerja);
    getchar();
    printf("Golongan        : ");
    scanf("%c", &gol);
    getchar();

    //cek gaji pokok
    if (gol == 'A'){
        gaji_pokok = 2250000;
    } else if (gol == 'B'){
        gaji_pokok = 1750000;
    } else if (gol == 'C'){
        gaji_pokok = 1500000;
    } else {
        gaji_pokok = 1100000;
    }

    //cek jumlah pesangon
    if (kerja < 1){
        jm_pes = 1;
    } else if (kerja >= 1 && kerja< 2){
        jm_pes = 2;
    } else if (kerja >= 2 && kerja< 3){
        jm_pes = 3;
    } else if (kerja >= 3 && kerja< 4){
        jm_pes = 4;
    } else if (kerja >= 4 && kerja< 5){
        jm_pes = 5;
    } else if (kerja >= 5 && kerja< 6){
        jm_pes = 6;
    } else if (kerja >= 6 && kerja< 7){
        jm_pes = 7;
    } else if (kerja >= 6 && kerja< 7){
        jm_pes = 8;
    } else {
        jm_pes = 9;
    }
    //menghitung upah per bulan
    upah_pb = gaji_pokok + tunjangan;
    //menghitung tunjangan
    pesangon = upah_pb * jm_pes;

    //menampilkan output
    printf("================= Data Karyawan ==================\n");
    printf("Nama Karyawan    : %s \n", nama);
    printf("Masa Kerja       : %f \n", kerja);
    printf("Golongan         : %c \n", gol);
    printf("\n");
    printf("================== Upah Bulanan ==================\n");
    printf("Gaji Pokok       : Rp. %d \n", gaji_pokok);
    printf("Tunjangan        : Rp. %d \n", tunjangan);
    printf("Upah per bulan   : Rp. %f \n", upah_pb);
    printf("\n");
    printf("=================== Pesangon =====================\n");
    printf("Total Pesangong  : Rp. %f \n", pesangon);
    printf("===================================================");
}
