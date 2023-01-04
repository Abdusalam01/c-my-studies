#include <stdio.h>       
#include <stdlib.h>     

int main()
{
  float a,b,toplam,fark,carpim,bolum;
  printf("ilk sayiyi gir: ");
  scanf("%f",&a);
  printf("ikinci sayiyi gir: ");
  scanf("%f",&b);
  toplam=a+b;
  fark=a-b;
  carpim=a*b;
  bolum=a/b;
  printf("a+b= %.2f\n", toplam);
  printf("a-b= %.2f\n", fark);
  printf("a*b= %.4f\n", carpim);
  printf("a/b= %.6f\n", bolum);

  
  return 0;

}