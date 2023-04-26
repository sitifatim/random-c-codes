#include<stdio.h>

int main()
{
    //deklarasi variabel
    char kelas;

    //menggunakan fungsi printf dan getchar
    printf("Input kelas : ");
    kelas = getchar();

    //menampilkan output
    printf("------------------------\n");
    printf("Kelas Saya   : %c\n", kelas);

    return 0;
}
