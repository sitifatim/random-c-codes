#include<stdio.h>

int main()
{
    int uang = 1000000;
    int bunga, bulan;

    for (bulan=1; bulan<=10; bulan++)
    {
        bunga = uang*0.02;
        uang=uang+bunga;
        printf("Jumlah uang bulan %d: %d\n",bulan, uang);
    }

    printf("===================== Hasil ====================\n");
    printf("Jumlah uang setelah 10 bulan adalah: %d\n", uang);
}
