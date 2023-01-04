#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=b=c=0;
    printf("ilk degiskeni giriniz: ");
    scanf("%d", &a);
    printf("ikinci degiskeni giriniz: ");
    scanf("%d", &b);
    c=a+b; 
    printf("sonuc: %d\n", c);
    
    return 0;

}