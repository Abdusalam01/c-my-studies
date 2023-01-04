#include <stdio.h>
  //   *** enum bir numaranlandirma fonkisiyonudur ***
  
enum meyve { Karpuz, Kavun, Kiraz, Erik } e;
//enum etiket-adı {liste} değişken-listesi;
int main(void)
{
  int option;

  printf("Bir sayı giriniz[0-3]: ");
  scanf("%d", &option);

  e = option;

  switch (e) {
    case Karpuz: printf("Karpuz");
       break;
    case Kiraz: printf("Kiraz");
       break;
    case Erik: printf("Erik");
       break;
    case Kavun: printf("Kavun");
  }
  
  return 0;
}

