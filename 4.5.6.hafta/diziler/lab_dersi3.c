#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,sayitek=0,sayicift=0;

    printf("Bir n degeri giriniz: ");
    scanf("%d",&n);
    printf("\n");

    int dizi[n],tek[n],cift[n];

    for ( i = 0; i <= n; i++)
        dizi[i]=i;

    for ( i = 0; i <= n; i++)
    {
        if (dizi[i]%2==0)
        {
            cift[sayicift]=i;
            sayicift++;
        }
        else{
            tek[sayitek]=i;
            sayitek++;
        }
    }
    printf("Tek sayilar: \n");
    for ( i = 0; i < sayitek; i++)
        printf("%d ",tek[i]);
    printf("\n");

    printf("Cift sayilar: \n");
    for ( i = 0; i < sayicift; i++)
        printf("%d ",cift[i]);
    printf("\n");
        
    return 0;
}