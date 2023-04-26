#include<stdio.h>

int main()
{
	int n;
	printf("masukan jumlah array: ");
	scanf("%d", &n);
	int data[n];
	int i,j, key, temp, mid;
	int top = n;
	int bottom = 0;
	int temu=0;
	
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
	
	while (top>= bottom){
		mid = (top+bottom)/2;
		if(data[mid] == key)
		{
			printf("data ditemukan pada indeks %d", mid);
			temu++;
			break;
		}
		else if (data[mid]>key)
		{
			top = mid-1;
		}
		else if (data[mid]<key)
		{
			bottom = mid+1;
		}
	}
	
	if (temu == 0){
		printf("tidak ketemu");
	}
	
}
