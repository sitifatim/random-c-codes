#include<stdio.h>

int main()
{
	int a;
	printf("Masukkan jumlah data array: ");
	scanf("%d", &a);
	int i, j,k;
	int data[a];
	int b=0;
	for (i=0; i<a; i++)
	{
		printf("Masukkan data indeks ke-%d : ", i);
		scanf("%d", &data[i]);
		b += data[i];
	}
	//printf("Hasil penjumlahan adalah : %d", b);
	printf("%d", b);
	
	return 0;
}
