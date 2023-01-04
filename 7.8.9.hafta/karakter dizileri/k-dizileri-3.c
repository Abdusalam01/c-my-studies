#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//  Atamanın bir karakter dizisine yapılabilmesi için, C'nin standart strcpy() fonksiyonu kullanılır.
int main()
{    // Karakter Dizilerini Atama
    char dizi1[50],dizi2[50];
    strcpy(dizi1, "algoritma");
    strcpy(dizi2, "ve programlama");

    printf("\n%s\n",strcat(dizi1,dizi2));

/*    Karakter Dizilerini Karşılaştırmak
    • İki karakter dizisinin birbirleriyle karşılaştırılarak,
      içerdiği karakterlerin aynı olup olmadıkları test edilebilir.
    • Bu amaçla strcmp() fonksiyonu kullanılır.
    • Karşılaştırma sonucunda, her iki karakter dizisi birbirinin aynı ise "0"; 
       birbirinden farklı ise "1" değeri üretilir. 
       Elde edilen bu değer kullanılarak programın akışı yönlendirilebilir.
*/
    if (strcmp(dizi1,dizi2))  // dizi1 ve dizi2 birbirine benziyormu anlamına gelmekte.
       printf("metinler bir birinden farikli ");
    else
    printf("metinler birbirleriyle ayni ");
    return 0;
}