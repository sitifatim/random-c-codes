#include<stdio.h>

int main()
{
	int i,j;
	int m[2][2];
	char u;
	
	do {
		for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				printf("Masukan nilai matrik [%d][%d]: ",i,j);
				scanf("%d", &m[i][j]);
				printf("\n");
			}
		}
		
		printf("hasil matrik \n");
		for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				printf("%d ", m[i][j]);
			}
			printf("\n");
		}
		printf("Ulangi?: ");
		getchar();
		scanf("%c", &u);
		printf("\n");
	} while(u == 'Y');
	
	printf("==========Terimakasih==============");
}
