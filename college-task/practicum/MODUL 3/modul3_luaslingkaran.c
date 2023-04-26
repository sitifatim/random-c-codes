#include<stdio.h>

int main()
{
    //deklarasi konstata
    const float Pi = 3.14;
    float r;
    float L;

    printf("Masukan jari-jari lingkaran :");
    scanf("%f", &r);

    L = Pi * r * r;

    printf("Jari-jari   : %.2f\n", r);
    printf("Luas        : %.2f\n", L);

    return 0;
}
