#include <stdio.h>

int main ()
{
	int i;
	for (i=1;i<=5;i++) {
		int j, a=1;
		for (j=1;j<=i;j++) {
			
			printf("%d", a);
			a=a+2;
		}
		printf("\n");
	}
}
