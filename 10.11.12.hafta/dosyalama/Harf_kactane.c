#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    /*--------------------- Dosyada harf arama ve kaç tane olduğunu bulma. ----------------------*/
    FILE *dosya1;
    if ((dosya1 = fopen("Kactane_harf.txt","w")) == NULL) // kactane_harf adinda ve yazma(w) modunda bir dosya olustur. 
    {                                                     // dosyanin olusup olusmadigini kontrol et.
        printf("Kactane_harf.txt Dosyasi Acilamadi...!!!");
        exit(1);
    }
    fprintf(dosya1,"Bursa Teknik Universitesi Bilgisayar Muhendisligi Bolumu");     // Olusturulan txt dosyasina yaz
    fclose(dosya1);     // dosyayi kapat

    if ((dosya1 = fopen("Kactane_harf.txt","r+")) == NULL) // txt dosyasini okuma ve yazma(r veya r+) modunda ac.
    {                                                      // ve dosyanin acilip acilmadigini kontrol et.
        printf("Kactane_harf.txt Dosyasi Acilamadi...!!!");
        exit(1);
    }
    int sayac[26] = {};         // Harflerden kactane oldugunu tutan dizimiz.
    char x;       // dosyadan okunan harfleri turan degiskenimiz
    while (1)
    {
        x = fgetc(dosya1);      // dosyadan her seferinde bir karakter okur ve onu x degiskenine atar.
        if (x == EOF) break;    // x degiskeni dosyadaki son karakteri okudugu zaman dongu sonlansin.

        if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))   // X degiskenine atanan parapetrelerin harf olup olmadiginin kontrolu.
        {
            sayac[tolower(x) - 'a']++;  // tolower fonkisyonu buyuk harfleri kucuk harfe donusturur.
        }
        
    }
    char c[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char cKopya;  // c dizinisindeki harfleri kopyalamak icin.
    int temp;       // kopya icin.

    // Harflerin coktan aza dogru siralanmasi.
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (sayac[i] > sayac[j]){
                temp = sayac[i];
                sayac[i] = sayac[j];
                sayac[j] = temp;

                cKopya = c[i];
                c[i] = c[j];
                c[j] = cKopya;
            }
        }
    }
    // Siralamanin ekrana yazilmasi.
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d\n",c[i],sayac[i]);
    }
    
    fclose(dosya1);     // dosyayi kapat




    return 0;
}