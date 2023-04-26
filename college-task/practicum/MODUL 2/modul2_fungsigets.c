#include <stdio.h>

int main()
{
    char nama[30];
    char usia[9];
    char berat[8];

    printf("Nama Anda: ");
    gets(nama);
    printf("Usia Anda: ");
    gets(usia);
    printf("Berat Anda: ");
    gets(berat);

    printf("-------------------------------\n");
    printf("Nama         : %s \n", nama);
    printf("Usia         : %s tahun\n", usia);
    printf("Berat Badan  : %s KG\n", berat);

    return 0;
}
