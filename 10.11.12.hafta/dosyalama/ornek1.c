#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{  
    char veri[25]="Yazilim Bilimi";
    int uzunluk=strlen(veri);
    // FILE *pdosya= fopen("dosya_adı","mod") 
    FILE *fp= fopen("yazilimci.txt","w"); /* * FILE pointeri yardimiyla dosyaları oluştura biliriz.
                                             * fopen() dosya açmak için kullanılır.       */


    if (fp==NULL)
        printf("dosya olusturulamadi");
    else{
        for (int i = 0; i < uzunluk; i++)
        {
            fputc(veri[i],fp);//fp dosyasına karakter yazmamızı sağlıyor
            printf("Yazilan Karekter: %c\n",veri[i]);
        }
        
        printf("dosya olustu...");
    }

    fprintf(fp," %d ",2023); //fp dosyasına karakter yazmamızı sağlıyor
    fclose(fp);
    
    return 0;
}