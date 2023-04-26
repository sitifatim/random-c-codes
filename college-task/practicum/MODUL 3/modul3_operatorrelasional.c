#include <stdio.h>

int main()
{
    int x = 37;
    int y = 42;
    int z = 42;
    int a,b,c,d,e,f;

    a = x<y;
    b=x>y;
    c=x==y;
    d=z!=y;
    e=y<=z;
    f=z>=x;

    printf("x<y  = %d\n", a);
    printf("y<=z  = %d\n", e);
    printf("x>y  = %d\n", b);
    printf("z>=x  = %d\n", f);
    printf("x==y  = %d\n", c);
    printf("z!=y  = %d\n", d);

    return 0;
}
