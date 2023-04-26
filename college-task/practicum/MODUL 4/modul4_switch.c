#include<stdio.h>
#include <ctype.h>

int main()
{
    char gol;

    //input
    printf("Inputkan Golonga (A/B/C): ");
    scanf("%c", &gol);

    //cek upah
    switch(toupper(gol)){
        case 'A':
            printf("\nUpah Rp. 780000 \n");
            break;
        case 'B':
            printf("\n Upah Rp. 620000\n");
            break;
        case 'C':
            printf("\nUpah Rp. 420000\n");
            break;
        default:
            printf("\n Salah input golongan\n");
            break;
    }

    return 0;
}
