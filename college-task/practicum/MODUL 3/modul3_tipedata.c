#include<stdio.h>
#include<limits.h>

int main()
{

    printf("Memeriksa Memori Tipe Data\n");
    printf("Char  : %d byte \n", sizeof(char));
    printf("Short : %d byte \n", sizeof(short));
    printf("Int   : %d byte \n", sizeof(int));
    printf("Long  : %d byte \n", sizeof(long));
	//printf("==============================\n");
    printf("\n");

    printf("Mememriksa Minimal Tipe Data \n");
    printf("Char  : %d \n", SCHAR_MIN);
    printf("Short : %d \n", SHRT_MIN);
    printf("Int   : %d \n", INT_MIN);
    printf("Long  : %d \n", LONG_MIN);
    printf("================================\n");
    printf("\n");

    printf("Memeriksa Nilai Maksimal Tipe Data\n");
    printf("Char  : %d \n", SCHAR_MAX);
    printf("Short : %d \n", SHRT_MAX);
    printf("Int   : %d \n", INT_MAX);
    printf("Long  : %d \n", LONG_MAX);
    printf("==================================\n");
    printf("\n");

    return 0;
}
