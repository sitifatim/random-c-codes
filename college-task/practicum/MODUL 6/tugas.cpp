#include <stdio.h>

int main(void)
{
	int i;
	float a;
	float total;
	float rata;
	float banyak=0;
	printf("masukkan total nilai: ");
	scanf("%f", &total);
	
	for (i=1; i<=3;i++){
		printf("masukkan nilai ke %i: ", i);
		scanf("%f", &a);
		banyak = banyak+a;
	}
	rata = banyak/total;
	
	printf("total : %.1f\n", total);
	printf("banyak : %.1f\n", banyak);
	printf("rata-rata : %.1f", rata);
	return 0;
}
