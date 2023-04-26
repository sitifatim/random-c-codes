#include<stdio.h>

int main()
{
    int A[2][3] = {{2,4,3},{3,2,5}};
    int  C[2][5];
    int B[3][5] = {{3,2,5,7,4},{2,4,6,3,2},{3,3,2,5,4}};
    int baris, kolom, kolom2;

    for (baris=0; baris<2; baris++){
        for(kolom=0; kolom<5; kolom++){
            C[baris][kolom]=0;
        }
    }   for (baris=0; baris<2; baris++)
    {
        for(kolom=0; kolom<5; kolom++){
            for(kolom2=0; kolom2<3; kolom2++){
                C[baris][kolom] = C[baris][kolom] + A[baris][kolom2]*B[kolom2][kolom];
            }
        }
    }
    //perkalian


    //output
    for (baris=0; baris<2; baris++){
        for (kolom=0; kolom<5; kolom++){
            printf("%d\t", &C[baris][kolom]);
        }
        printf("\n");
    }
    return 0;
}
