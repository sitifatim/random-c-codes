#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int baris, kolom;

    //input matriks a
    for (baris=0; baris<2; baris++)
    {
        for (kolom=0; kolom<3; kolom++)
        {
            printf("Baris ke - %d, Kolom ke -%d: ", baris+1, kolom+1);
            scanf("%d", &A[baris][kolom]);
        }
    }
    printf("\n");

    //input matriks b
    for (baris=0; baris<3; baris++)
    {
        for (kolom=0; kolom<5; kolom++)
        {
            printf("Baris ke - %d, Kolom ke -%d: ", baris+1, kolom+1);
            scanf("%d", &B[baris][kolom]);
        }
    }
    //perkalian
    for (baris=0; baris<2; baris++)
    {
        for (kolom=0; kolom<5; kolom++)
        {
            C[baris][kolom]=(A[baris][0]*B[kolom][0]) + (A[baris][1]*B[kolom][1]) + (A[baris][2]*B[kolom][2]);
        }
    }

    for (baris=0; baris<2; baris++)
    {
        for (kolom=0; kolom<5; kolom++)
        {
            printf("%d\t", C[baris][kolom]);
        }
        printf("\n");
    }
    return 0;
}
