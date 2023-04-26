#include <stdio.h>
#include<string.h>

int main()
{
    //deklarasi variabel
    char nama[50];
    float nMat, nBio, nFis, nKim, nIng;
    float nTotal, nRata;
    char grade;
    char predikat[15];

    //input
    printf("Nama Mahasiswa         : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf("Input Nilai Matematika :");
    scanf("%f", &nMat);
    getchar();
    printf("Input Nilai Biologi    :");
    scanf("%f", &nBio);
    getchar();
    printf("Input Nilai Fisika     :");
    scanf("%f", &nFis);
    getchar();
    printf("Input Nilai Kimia      :");
    scanf("%f", &nKim);
    getchar();
    printf("Input Nilai B.Inggris  :");
    scanf("%f", &nIng);
    getchar();

    //hitung total
    nTotal = nMat + nBio + nFis + nKim + nIng;
    nRata = nTotal/5;

    //cek nilai kelulusan
    if (nRata >= 81 && nRata <= 100){
        grade = 'A';
    } else if (nRata >= 71 && nRata < 81){
        grade ='B';
    } else if (nRata >= 51 && nRata < 71){
        grade ='C';
    } else if (nRata >= 31 && nRata < 51){
        grade ='D';
    } else if (nRata >= 0 && nRata < 31){
        grade ='E';
    } else {
        printf("Nilai rata-rata tidak valid");
    }

    //cek predikat kelulusan
    switch(grade) {
        case 'A':
            strcpy(predikat, "Sangat memuaskan");
            break;
        case 'B':
            strcpy(predikat, "Memuaskan");
            break;
        case 'C':
            strcpy(predikat, "Cukup");
            break;
        case 'D':
            strcpy(predikat, "Kurang");
            break;
        case 'E':
            strcpy(predikat, "Gagal");
            break;
        default:
            printf("\nGrade nilai tidak valid \n");
            break;
    }

    //cetak output
    printf("=================== Nilai Mahasiswa=================\n");
    printf(" Nama Mahasiswa     : %s \n", nama);
    printf(" Nilai Matematika   : %.2f \n", nMat);
    printf(" Nilai Biologi      : %.2f \n", nBio);
    printf(" Nilai Fisika       : %.2f \n", nFis);
    printf(" Nilai Kimia        : %.2f \n", nKim);
    printf(" Nilai B. Inggris   : %.2f \n", nIng);
    printf("=========================== hasil =====================\n");
    printf(" Total Nilai        : &.2f \n", nTotal);
    printf(" Nilai rata-rata    : %.2f \n", nRata);
    printf("Grade               : %c \n", grade);
    printf("Predikat Kelulusan  : %s \n", predikat);
    printf("=======================================================\n");

    return 0;
}
