#include <stdio.h>
#include <stdlib.h>          

int main()
{
printf("karakterlar: %c %c %c\n", 'a', 65, 68); // %c ascıı karşılığını bulmak için kullanılır.
printf("Decimal sayilar: %d %ld\n", 1977, 650000L); // %ld long sayısını göstermak için kullanıyoruz.
printf("oncesine bosluk: %10d\n", 1999);
printf("oncesine 0 yazmak: %010d\n", 1999);

  return 0;
}