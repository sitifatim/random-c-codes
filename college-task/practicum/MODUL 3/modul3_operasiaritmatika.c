#include <stdio.h>

int main()
{
    //deklarasi variabel
    int x, y;
    int penjumlahan, pengurangan, sisaBagi, perkalian;
    float pembagian;

    x = 45;
    y = 6;

    penjumlahan = x+y;
    pengurangan = x-y;
    sisaBagi = x%y;
    perkalian = x*y;
    pembagian = x/y;

    printf("Hasil x+y = %d \n", penjumlahan);
    printf("Hasil x-y = %d \n", pengurangan);
    printf("Hasil x%y = %d \n", sisaBagi);
    printf("Hasil x*y = %d \n", perkalian);
    printf("Hasil x/y = %d \n", pembagian);

    return 0;
}
