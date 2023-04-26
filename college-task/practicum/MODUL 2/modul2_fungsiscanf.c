#include <stdio.h>

int main()
{
    //deklarasi varibel
    char nama[50];
    int usia;
    float berat;

    //fungsi printf dan scanf
    printf("Input Nama Anda: ");
    scanf("%[^\n]s", &nama);
    printf("Input Umur Anda: ");
    scanf("%d", &usia);
    printf("Input Berat Anda: ");
    scanf("%f", &berat);

    //tampilan output
    printf("-----------------------------\n");
    printf("Nama\t: %s\n", nama);
    printf("Umur\t: %d\n", usia);
    printf("Berat\t: %f\n", berat);

    return 0;
}
