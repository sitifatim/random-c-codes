#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nilai;
    printf("Masukan Nilai   : ");
    scanf("%d", &nilai);

    //fungsi while
    while (nilai<0 || nilai >100)
    {
        system("cls");
        printf("Data Salah, Ulangi Memasukan Nilai  : ");
        scanf("%d", &nilai);
    }

    printf("=========== Hasil Nilai ============\n");

    if(nilai >= 0 && nilai <=100)
    {
        if (nilai >= 60)
        {
            printf("\t\tLULUS");
        } else
        {
            printf("\t\tGAGAL");
        }
    }

    return 0;
}
