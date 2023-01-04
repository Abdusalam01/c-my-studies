#include<stdio.h>
#include<stdlib.h>
void bul(int a, int b)
{
    int i,carp;
    carp=1;
    for(i=1;i<=b;++i)
        carp*=a;
    printf("sonuc = %5.3d",carp);
}
int main()
{
    int x,y;
    printf("Iki tamsayi giriniz: ");
    scanf("%d%d",&x,&y);
    bul(x,y);
    return (0);
}