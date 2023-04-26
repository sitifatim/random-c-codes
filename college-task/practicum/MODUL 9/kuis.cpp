#include<stdio.h>

int main()
{
	char nama[2][2];
	nama[0][0]="saya";
	nama[0][1]="akan";
	nama[1][0]="rajin";
	nama[1][1]="belajar";
	int i,j;
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%s", nama[i][j]);
		}
	}
}
