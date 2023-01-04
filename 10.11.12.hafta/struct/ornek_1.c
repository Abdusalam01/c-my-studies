#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct Arac
{
    char marka_model[50];
    int modelYili;
    int km;
    float fiyat;
};
typedef struct Arac Araba;  /* typedef deyimini struct deyimi ile beraber kullanıldığında oluşturduğunuz yapıyı bir değişken türü 
                            olarak tanımlayıp o yapının çoğaltılmasını sağlar. Bu yapıdan değişken tanımlamak için tekrar struct 
                            deyiminin kullanılmasına gerek kalmaz.*/
int main()
{
    srand(time(0));
    Araba arabalr[50];
    char marmodel[3][50]={"Tesla-x","Mersedes-GT63S","Mersedes-G500"};
    for (int i = 0; i < 10; i++)
    {
        arabalr[i].fiyat=(float)((rand()%200000)+1+50000)+(float)((rand()%100)/(float)100);
        arabalr[i].km=rand()%1000001;
        arabalr[i].modelYili=rand()%42+1980;
        strcpy(arabalr[i].marka_model,marmodel[rand()%3]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("  %s    %d     %d    %0.2f\n",arabalr[i].marka_model,arabalr[i].modelYili,arabalr[i].km,arabalr[i].fiyat);
    }
    


    return 0;

}
