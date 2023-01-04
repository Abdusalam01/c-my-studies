#include <stdio.h>
#include<stdlib.h>
int main()
{
    int dizi[10];
    int i,a,b;
    for ( i = 0; i < 10; i++)
    {
        printf("%d.sayiyi giriniz: ",i);
        scanf("%d",&dizi[i]);
         if (dizi[i]==0)
            break;
        a=i;
    }
    for ( i = 0; i <= a; i++)
    {
        printf("%5d. eleman degeri: %3d  -->",i,dizi[i]);
        for ( b = 0; b <= dizi[i]-1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}