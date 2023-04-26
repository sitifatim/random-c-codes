#include <stdio.h>


int main(){
int a,b,h;
for (a=1;a<=10;a++){
	for (b=1;b<=10;){
		h=a*b;
		printf("%d",h);	
		b++;	
	} 
	printf("\n");
}
return 0;
}
