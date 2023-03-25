#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,f,g;
    float c,d,h,i;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    
    f = a+b;
    g = a-b;
    h = c+d;
    i = c-d;
    
    printf("%d %d\n",f,g);
    printf("%.1f %.1f", h,i);
    
    return 0;
}