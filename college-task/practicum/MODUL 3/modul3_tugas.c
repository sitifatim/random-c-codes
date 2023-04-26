#include<stdio.h>

int main()
{
    //deklarasi nama konsumen
    char nama[50];
    char tanggal[50];
    char toko[50] = "Pelangi Nusantara";
    //deklarasi variabel nama item
    char item_1[50];
    char item_2[50];
    char item_3[50];
    char item_4[50];
    char item_5[50];
    //deklarasi variabel harga item
    int hi1;
    int hi2;
    int hi3;
    int hi4;
    int hi5;
    //deklarasi variabel output
    int total;
    const int diskon = 30 ;
    float total_bayar;
    //fungsi printf dan scanf
    printf("==================== Input Data Transaksi==============\n");
    printf("Input Nama Konsumen: ");
    scanf("%[^\n]s", &nama);
    printf("Input Tanggal Transaksi (DD/MM/YYYY): ");
    scanf("%s", &tanggal);
    printf("\n");
    printf("==================== Input Item Transaksi ===============\n");
    printf("Input Item 1       :");
    getchar();
    scanf("%[^\n]s", &item_1);
    printf("Input harga item 1 :");
    scanf("%d", &hi1);
    printf("\n");
    printf("Input Item 2       :");
    getchar();
    scanf("%[^\n]s", &item_2);
    printf("Input harga item 2 :");
    scanf("%d", &hi2);
    printf("\n");
    printf("Input Item 3       :");
    getchar();
    scanf("%[^\n]s", &item_3);
    printf("Input harga item 3 :");
    scanf("%d", &hi3);
    printf("\n");
    printf("Input Item 4       :");
    getchar();
    scanf("%[^\n]s", &item_4);
    printf("Input harga item 4 :");
    scanf("%d", &hi4);
    printf("\n");
    printf("Input Item 5       :");
    getchar();
    scanf("%[^\n]s", &item_5);
    printf("Input harga item 5 :");
    scanf("%d", &hi5);

    //proses aritmatika
    total = hi1 + hi2 + hi3 + hi4 + hi5;
    total_bayar = total -(total * diskon/100);

    //menampilkan output
    printf("==================== Nota Belanja ================\n");
    printf("Toko      : %s\n", toko);
    printf("Konsumen  : %s\n", nama);
    printf("Transaksi : %s\n", tanggal);
    printf("==================== Daftar belanja ==============\n");
    printf("%s\t: Rp. %d\n", item_1, hi1);
    printf("%s\t: Rp. %d\n", item_2, hi2);
    printf("%s\t: Rp. %d\n", item_3, hi3);
    printf("%s\t: Rp. %d\n", item_4, hi4);
    printf("%s\t: Rp. %d\n", item_5, hi5);
    printf("==================== Total Bayar =================\n");
    printf("Total Belanja  : Rp %d \n", total);
    printf("Diskon         : %d %% \n", diskon);
    printf("Total Bayar    : Rp %.2f\n", total_bayar);
    printf("==================================================\n");

    return 0;
}
