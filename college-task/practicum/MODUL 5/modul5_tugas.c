#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char kode;
    int jumlah, total, diskon, harga_akhir, diskon1, diskon2;
    const int hargaA = 65000;
    const int hargaB = 130000;
    const int hargaC = 84900;
    const int diskon_awal=25;

    //daftar promo
    printf("--------------- Daftar Promo -------------\n");
    printf(" A. Garam himalaya 1 kg\n");
    printf(" B. Gamis lengan panjang\n");
    printf(" C. Minyak kelapa barco 5 liter\n");
    printf("------------------------------------------\n");

    //tampilan input
    printf("Pilih produk (A/B/C): ");
    scanf("%c", &kode);
    getchar();
    printf("Jumlah yang dibeli (1-10): ");
    scanf("%d", &jumlah);
    getchar();


    //aritmatika
    //fungsi
    switch (toupper(kode)) {
        case 'A':
            printf("Produk            : Garam himalaya 1 kg\n");
            printf("Harga Satuan      : Rp. 65000.00\n");
            //cek harga
            if (jumlah == 1) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaA*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon = 0;
                printf("Diskon            : Rp. %d\n", diskon);
                printf("Diskon tambahan   : Rp. 0\n");
                harga_akhir = total - diskon;
                printf("Total Harga Akhir : %d", harga_akhir);
            } else if (jumlah >1 && jumlah==2) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaA*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon = 5000;
                printf("Diskon            : Rp. %d\n", diskon);
                printf("Diskon tambahan   : Rp. 0\n");
                harga_akhir = total - diskon;
                printf("Total Harga Akhir : %d", harga_akhir);
            } else if (jumlah >2 && jumlah==3) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaA*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon = 7500;
                printf("Diskon            : Rp. %d\n", diskon);
                printf("Diskon tambahan   : Rp. 0\n");
                harga_akhir = total- diskon;
                printf("Total Harga Akhir : %d", harga_akhir);
            } else if (jumlah >3) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaA*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon = 10000;
                printf("Diskon            : Rp. %d\n", diskon);
                printf("Diskon tambahan   : Rp. 0\n");
                harga_akhir = total - diskon;
                printf("Total Harga Akhir : %d\n", harga_akhir);
            } else {
                printf("Kosong \n");
            }
            break;
        case 'B':
            printf("Produk       : Gamis lengan panjang\n");
            printf("Harga Satuan : Rp. 130000.00\n");
            //cek harga
            if (jumlah == 1) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaB*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon1 = total*(diskon_awal/100);
                printf("Diskon            : Rp. %d\n", diskon1);
                diskon2 = 0;
                printf("Diskon tambahan   : Rp. %d\n", diskon2);
                harga_akhir = total - (diskon1 + diskon2);
                printf("Total Harga Akhir : %d", harga_akhir);
            } else if (jumlah > 1 && jumlah ==2) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaB*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon1 = total*(diskon_awal/100);
                printf("Diskon            : Rp. %d\n", diskon1);
                diskon2 = total*(0.07);
                printf("Diskon tambahan   : Rp. %d\n", diskon2);
                harga_akhir = total - (diskon1 + diskon2);
                printf("Total Harga Akhir : %d", harga_akhir);
            } else if (jumlah > 2) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaB*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon = total*(diskon_awal/100);
                printf("Diskon            : Rp. %d\n", diskon1);
                diskon2 = total*(12/100);
                printf("Diskon tambahan   : Rp. %d\n", diskon2);
                harga_akhir = total - (diskon1 + diskon2);
                printf("Total Harga Akhir : %d", harga_akhir);
            } else {
                printf("Kosong \n");
            }
            break;
        case 'C':
            printf("Produk       : Gamis lengan panjang\n");
            printf("Harga Satuan : Rp. 84900.00\n");
            //cek harga
            if (jumlah >= 3) {
                printf("Jumlah Beli       : %d\n", jumlah);
                total = hargaC*jumlah;
                printf("Total Harga Beli  : Rp. %d\n", total);
                diskon = hargaC*15/100;
                printf("Diskon            : Rp. %d\n", diskon);
                printf("Diskon tambahan   : Rp. 0\n");
                harga_akhir = total- diskon;
                printf("Total Harga Akhir : %d", harga_akhir);
            } else {
                printf("Kosong \n");
            }
            break;
        default:
            printf("\nInput kode tidak valid");
            break;
    }
}
