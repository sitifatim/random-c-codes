#include <stdio.h>

int main()
{
    int x;

    x=(5>4) && (10>9);
    printf("5>4) && (10>9): %d \n",x);
    x =(15<=15) && (15<15);
    printf("(15<=15) && (15<15): %d\n",x);
    x = ('a' == 'a') || ('a' == 'b');
    printf("('a' == 'a') || ('a' == 'b'): %d\n",x);
    x=(10>7) && ('Sapu' == 'sapun');
    printf("(10>7) && ('Sapu' == 'sapun'): %d\n",x);

    return 0;
}
