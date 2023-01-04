#include <stdio.h>
#include <stdlib.h>
//1'den başlayarak kullanıcı tarafından girilen sayıya kadar olan tüm sayıların faktoriyellerini hesaplayan program.
//İç içe döngü kullanılmıştır.
int main()
{
   int sayi =0;
   int i,j;
   int faktoriyel=1;

   printf("lutfen bir sayi giriniz: ");
   scanf("%d", &sayi);

   for (i=1;i<=sayi;i++)
   {
       for(j=1;j<=i;j++)
       {
           faktoriyel=faktoriyel*j;
       }
       printf("%d !=%d\n",i,faktoriyel);
       faktoriyel=1;
   }

    return 0;
}