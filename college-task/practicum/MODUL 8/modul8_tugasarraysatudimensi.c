#include <stdio.h>

int main()
{
    char arr[15] = "ABCDEFGHIJKLMNO";
    int n = 15;
    char i,j, k;

    for (i=0; i<n; i++)
    {
        for(j=5; j>1; j--)
        {
            printf("  ");
            for (k=0; k<=i; k++)
            {
                printf("%c",arr[i]);
            }
        }
        printf("\n");
    }
}
