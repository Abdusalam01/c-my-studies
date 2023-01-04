#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#define N 10    // dizi de bu tanımda N diğeri değiştiremez, N= sabit 100
int main()
{
    int dizi [N];
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        dizi[i]=rand();
        printf("%d ",dizi[i]);
    }
    printf("\n\n\n");

        int enbuyuk,enkucuk,kucuk_indis,buyuk_indis;
        enkucuk=INT_MAX;
        enbuyuk=INT_MIN; 

        for (int i = 0; i < N; i++)
        {
            if (dizi[i]<enkucuk){
            enkucuk=dizi[i];
            kucuk_indis=i;
            }
            if (dizi[i]>enbuyuk){
            enbuyuk=dizi[i];
            buyuk_indis=i;
            }
        }
        
    printf("En kucuk: %d, En buyuk: %d\n",enkucuk,enbuyuk);
    printf("Kucuk indis: %d, Buyuk indis: %d\n",kucuk_indis,buyuk_indis);

    return 0;
}