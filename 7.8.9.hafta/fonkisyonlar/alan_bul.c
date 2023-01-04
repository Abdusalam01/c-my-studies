#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int menu(void);
void kare(void);
void daire(float y);
int main(void)
{
    int x,y;
    float yari;
        do{
            x=menu();
            if (x==1)
                kare();
            else if (x==2)
            {
                printf("Yaricapi giriniz: ");
                scanf("%f",&yari);
                daire(yari);
            }
        }while (x!=3);
        
    printf("Dur...");
    return 0;
}
int menu(void) //   ---> munu fonkisyonun tanimi
{
    int tercih;
    printf("----- 1. Kare -----\n");
    printf("----- 2. Daire -----\n");
    printf("----- 3. Dur -----\n");
    printf("Tercihinizi Giriniz: ");
    scanf("%d",&tercih);   
    printf("\n-------------------------------------\n");
    return (tercih);
}
// ---> kare fonkisyonunun tanimi
void kare(void)
{
    float kenar;
    printf("Kenar uzunlugu giriniz: ");
    scanf("%f",&kenar);
    printf("Alan= %5.2f\n",kenar*kenar);
}
// ---> darie fonkisyonu'nun tanimi
void daire(float y)
{
    float alan;
    alan=y*y*PI;
    printf("Alan= %5.2f\n",alan);
}