#include<stdio.h>

int main(){
	int i= 1;
	int a;
	float total;
	float banyak;
	float rata;
	printf("masukan banyak nilai: ");
	scanf("%f", &banyak);
	
	do {
		printf("masukan nilai %i", i);
		scanf("%f", a);
		
		total+=a;
	} while (i<=3);
	
	rata = total/banyak;
	printf("total : %f", banyak);
	printf("total nilai: %f", total);
	printf("rata-rata %f", rata);
}
