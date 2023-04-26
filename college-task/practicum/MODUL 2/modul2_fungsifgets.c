#include <stdio.h>

int main()
{
    //deklarasi variabel
    char nama[50], usia[4], berat[6];

    //menggunakan fungsi printf dan fgets
    printf("Input Nama Anda   : ");
    fgets(nama, sizeof(nama), stdin);
    printf("Input Usia Anda   : ");
    fgets(usia, 4, stdin);
    printf("Input Berat Anda  : ");
    fgets(berat,6, stdin);

    //menampilkan output
    printf("------------------------------\n");
    printf("Nama       : %s", nama);
    printf("Usia       : %s", usia);
    printf("Berat      : %s", berat);

    return 0;
}
