#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,toplam=0;

    for (i=1;i<=10;i++)
    {
     toplam+=i*i*i;
    }
    /*  while döngüsü
     i=1;
     while (i<=10)
     {
        toplam+=i*i*i;
        i++;
     }*/
     
    /*  do ... while döngüsü
    i=1;
     do
     {
         toplam+=i*i*i;
         i++;
     } while (i<=10);*/
     
     printf("toplam: %d\n",toplam);
     printf("\n\ni= %d",i);
     return 0;
    
}