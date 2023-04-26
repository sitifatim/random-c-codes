#include<stdio.h>

int main(){
	int i= 1;
	int a;
	int total=0;
	int banyak;
	float rata;
	printf("masukan banyak nilai: ");
	scanf("%d", &banyak);
	
	while(i<=3){
		printf("Masukan nilai %d : ", i);
		scanf("%d", a);
		total += a;
		i++;
	}
	rata = total/banyak;
	printf("total : %d", banyak);
	printf("total nilai: %d", total);
	printf("rata-rata %f", rata);
}
