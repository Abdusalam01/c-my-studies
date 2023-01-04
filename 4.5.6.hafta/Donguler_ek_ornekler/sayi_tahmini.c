#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*     rand --> fonkisyonu bilgisayarin rasgele bir sayı uretmesi icin kullanılır.
     kaça kadar rasgele bir sayı üretmesini belirlemek için % kullanılır *** sayi=rand()%50; *** 0-50 arası bir sayı üretir.
*/
int main()
{
    int sayi,sayi2;
    srand(time(0));
    sayi=rand()%100;  // hangi aralikta bir sayı uretmesini belirtmek için kullanilır

    for(;;)
    {
        printf("sayiyi gir: ");
        scanf("%d",&sayi2);
        if (sayi==sayi2){
        printf("\n Tebrikler buldunuz! \n");
        break;
        }
        else if (sayi2>sayi)
           printf("yalis asagi in!\n");
        else 
           printf ("yanlis yukariya cik \n");
    }
    return 0;
}