#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sec;
    int sayi1;
    int sayi2;
    int sonuc;
    do
    {
        printf("Toplama icin 1'e basiniz.\nCikarma icin 2'ye basiniz.\nCikmak icin -1'e basiniz.\n");
        scanf("%d",&sec);
        switch(sec)
        {
        case 1:
            printf("sayi 1:");
            scanf("%d", &sayi1);
            printf("sayi 2:");
            scanf("%d", &sayi2);
            sonuc=sayi1+sayi2;
            printf("sonuc: %d\n", sonuc);
        break;
        case 2:
            printf("sayi 1:");
            scanf("%d", &sayi1);
            printf("sayi 2:");
            scanf("%d", &sayi2);
            sonuc=sayi1- sayi2;
            printf("sonuc: %d\n", sonuc);
        break;
        default:
            if(sec!=-1)
                printf("Lutfen belirtilen secimlerden birini yapiniz!\n");
        }
    }
    while(sec!=-1);
 return 0;
}
