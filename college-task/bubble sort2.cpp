#include <stdio.h>

int main()
{
	int a[] = {15,10,7,22,17,5,12};
	int n = 7;
	int i, j, temp;
	
	for (i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for (j=0; j<n; j++)
	{
		printf("%d ", a[j]);
	}
	
	return 0;
}
