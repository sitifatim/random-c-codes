#include <stdio.h>
int main()
{
    char nama[50] = "Siti Fatimatuzzahro";
    char asalsekolah[50] = "SMA N 1 Karanganyar";
    char rombel='C';
    int usia=22;
    float berat=47.5;
    float tinggi=160.1;

    //inisialisasi nilai variabel
    rombel = 'C';
    usia = 22;
    berat = 47.4;
    tinggi = 161.1;

    //menampilkan output
    printf("---------------------------------\n");
    printf("Nama Mahasiswa     = %s \n", nama);
    printf("Asal Sekolah       = %s \n", asalsekolah);
    printf("Rombel Mahasiswa   = %c\n", rombel);
    printf("Usia Mahasiswa     = %d\n", usia);
    printf("Berat Mahasiswa    = %.2f\n", berat);
    printf("Tinggi Mahasiswa   = %.2f\n", tinggi);
    printf("----------------------------------");

    return 0;
}
