#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, dizi[10], enbuyuk;
    for ( i = 0; i < 10; i++)
    {
        printf("%2d. sayiyi giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    enbuyuk=dizi[0];
    for ( i = 0; i < 10; i++)
    {
        if (dizi[i]>enbuyuk)
        {
            enbuyuk=dizi[i];
        }        
    }
    printf("\n En buyuk deger = %d\n",enbuyuk);
    
    return 0;
}