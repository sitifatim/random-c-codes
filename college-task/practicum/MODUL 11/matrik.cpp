#include <stdio.h>

int main()
{
    int A[2][3] = {
        {2,4,3},
        {3,2,5}
        };
    int C[2][5];
    int B[3][5] = {
        {3,2,5,7,4},
        {2,4,6,3,2},
        {3,3,2,5,4}
        };

    int i, j, k, hasil;

    for (i = 0; i < 2; i++)
    {
        for (j=0;j<5;j++)
        {
            C[i][j] = 0;
            for (k=0;k<3;k++)
            {
                C[i][j] += (A[i][k]) * (B[k][j]);
            }
        }
    }

    for (i=0; i<2; i++){
        for (j=0; j<5; j++)
        {
            printf("%d\t", &C[i][j]);
        }
        printf("\n");
        }

    return 0;
}

