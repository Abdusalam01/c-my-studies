#include <stdio.h>
#include <stdlib.h>
int main()
{
   int secim;
   float a,b;

   printf("******** Menu ********\n");
   printf("1.Toplama\n");
   printf("2.Cikarma\n");
   printf("3.Carpma\n");
   printf("4.Bolme\n");

    printf("Islem No Giriniz-->");
    scanf ("%d",&secim);
    printf("\n");
     
    printf("1.sayi:");
    scanf("%f",&a);
    printf("2.sayi:");
    scanf("%f",&b);

    switch (secim)
{
     case 1:   printf("Sonuc: %5.2f\n",a+b);   break;
     case 2:   printf("Sonuc: %5.2f\n",a-b);   break;
     case 3:   printf("Sonuc: %5.2f\n",a*b);   break;
     case 4:   printf("Sonuc: %5.2f\n",a/b);   break;
     default:  printf("islem gecersiz!!!\n");  break;
}

   return 0;
}