#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{/*   *** Girilen Bir Cümlenin Kelimelerinin Baş Harflerini Büyük Harf Yapma ***
      Büyük harfe çevirme için toupper() fonksiyonu kullanılacaktır.
      toupper() fonkisyonunu kullanmak icin #include<ctype.h> kutuphanesini ekladim.
*/
    char cumle[100];
    int i;
    printf("Lutfen cumle giriniz: ");
    gets(cumle);

    for ( i = 0; i < strlen(cumle); i++)
    {
        if (cumle[i]==' ')
            cumle[i+1]=toupper(cumle[i+1]);
        else 
            if (i==0)
            cumle[i]=toupper(cumle[i]);
        
    }
    printf("\ncumle: %s",cumle);
    

    return 0;
}