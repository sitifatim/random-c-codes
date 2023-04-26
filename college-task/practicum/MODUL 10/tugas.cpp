#include<stdio.h>

int main()
{
	int n;
	printf("masukan jumlah array: ");
	scanf("%d", &n);
	int data[n];
	int i,j, key, temp;
	int top = n;
	int bottom = 0;
	
	//masukan array
	for (i=0;i<n;i++){
		printf("masukkan data  pada indeks ke - %i :", i);
		scanf("%d", &data[i]);
	}
	//pengurutan
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (data[j]>data[j+1]){
			temp = data[j];
			data[j] = data[j+1];
			data[j+1] = temp;
		}
		}
	}
	//tampilkan
	printf("data telah diurutkan \n");
	for (i=0;i<n;i++){
		printf("%d ", data[i]);
	}
	printf("\n");
	
	//key
	printf("masukan data yang dicari: ");
	scanf("%d", &key);
	
	for (i=0;i<n;i++)
	if (key == data[i])
	break;
	if (i<n)
		printf("data kunci ditemukan pada indeks %d", i);
	else 
		printf("data tidak ketemu");
	
	
	
}
