#include<stdio.h>

int main()
{
    const char Nilai = 'A';
    const float PHI = 3.54;

    //inisialisasi
    Nilai = 'B';
    PHI = 80;

    printf("----------------------\n");
    printf("Nilai  = %c\n", Nilai);
    printf("PHI    = %.2f\n", PHI);
    printf("----------------------\n");

    return 0;
}

