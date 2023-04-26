#include <stdio.h>

int main()
{
    float suhu;

    //membuat input
    printf("Inputkan suhu: ");
    scanf("%f", &suhu);

    //cek suhu
    if (suhu>36)
    {
        printf("\n==============================\n");
        printf("Suhu saat ini: %.2f \n", suhu);
        printf("Suhu Terlalu Tinggi \n");
        printf("================================\n");
    }

    return 0;
}
