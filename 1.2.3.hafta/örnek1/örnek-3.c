#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=5;
    printf("a : %d\n", a);
    b=a++;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    c=++a;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);


    return 0;
}