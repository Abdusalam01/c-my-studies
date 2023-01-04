#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int num,bayrak,i;
    printf("\n*** Asal sayilar ***\n\n");
    printf("Pozitif bir sayi giriniz: ");
    scanf("%d",&n);
    printf("\n 1-%d'ye kadar olan tum asal sayilar: ",n);
    printf("\n------------------------------------------\n");
    /* 1 sayisi haric, n'e kadar olan sayilarin asal olup olmadiginin bulunmasi  */
    for ( num = 2; num < n; num++)
    {   // sayilarin asal oldugunu kabul edelim.
        bayrak=1;
        i=2;
        while ((i<num)&&(bayrak==1))
        {
            if ((num%i)==0)
                bayrak=0;  // sayi bulundugu icin asal degildir.
            i++;
        }// eger bayrak degiskeni 1 ise asaldir.
        if(bayrak==1)
            printf("%4d",num);
    }
    printf("\n------------------------------------------\n");
    
    return 0;
}