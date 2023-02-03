#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int toplam(int n, ...);

int main(){

    int n;
    printf("Kac adet sayi toplayacaksiniz (MAX 10 sayi): ");      scanf("%d",&n);
    if (n > 10)
    {
        printf("Belirlenen Aralikte degil!!!\n");
        exit(1);
    }
    
    int sayi[n];
    int m = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d. Sayiyi giriniz: ",i+1);     scanf("%d",&sayi[i]);
    }
    printf("Girilen saylerin toplami: %d\n",toplam(n,sayi[0],sayi[1],sayi[2],sayi[3],sayi[4],sayi[5],sayi[6],sayi[6],sayi[7],sayi[8],sayi[9]));     
    
    return 0;
}





int toplam(int n, ...){
    va_list ap;
    int i, top = 0;

    va_start (ap, n);

    for (i=1; i<=n; i++)
        top += va_arg(ap,int);
    va_end (ap);
    return top;
    
}
