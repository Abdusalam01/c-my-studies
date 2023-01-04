#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ay,gun;
    printf("1-12 araliginda bir deger giriniz:");
    scanf("%d",&ay);
    if (ay>=1 && ay<=12)
    {
        switch (ay)
        {
         case 2:
            gun=28;
            break;
         case 4:
         case 6:
         case 9:
         case 11:
            gun=30;
            break;
        
         default:
            gun=31;
            break;
        }
        printf("girdiginiz ay %d gundur!", gun);
    }
    else
       printf("yanlis girildi!");
    return 0;
}