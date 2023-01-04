#include<stdio.h>
#include<stdlib.h>
char tip();
int main()
{
    printf("sayinin tipi: %c",tip());
}
char tip()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    if (sayi>0)
        return('P');
    else if(sayi==0)
        return('S');
    else
        return('N');
    
}