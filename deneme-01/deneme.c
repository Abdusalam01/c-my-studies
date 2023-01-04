#include<stdio.h>
#include<stdlib.h>
int kutu_ciz(int a,int b);
int main()
{
    int satir,sutun;
    printf("satir sayisini giriniz: ");
    scanf("%d",&satir);
    printf("sutun sayisini giriniz: ");
    scanf("%d",&sutun);
    kutu_ciz(satir,sutun);
    return (0);
}
int kutu_ciz(int a,int b)
{
    int toplam=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= b; j++)
        {            
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}