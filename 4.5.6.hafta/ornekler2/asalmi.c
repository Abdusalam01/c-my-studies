#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* int sayi; 
    printf(" 1-10 araliginde bir sayi giriniz:");
    scanf("%d",&sayi);
    
    if (sayi>=1 && sayi<=10)
    {
        switch (sayi)
        {
         case 1:
            printf("sayi asal degil");
            break;
         case 2:
            printf("sayi asal");
            break;
         case 3:
            printf("sayi asal");
            break;
         case 4:
            printf("sayi asal degil");
            break;
         case 5:
            printf("sayi asal");
            break;
         case 6:
            printf("sayi asal degil");
            break;
         case 7:
            printf("sayi asal");
            break;
         case 8:
            printf("sayi asal degil");
            break;
         case 9:
            printf("sayi asal degil");
            break;
        
         default:
            printf("sayi asal degil");
            break;
        }
    }
       
    else
        printf("girilen sayi istenen aralikta degil!");

    return 0;
  ******** üstteki 30 satırlık switch_case codunun kısave pratik hali  ********/
 int sayi;
    printf(" 1-10 araliginde bir sayi giriniz:");
    scanf("%d",&sayi);
    
    if (sayi>=1 && sayi<=10)
    {
        switch (sayi)
        {
         case 2:
         case 3:
         case 5:
         case 7:
            printf("sayi asal");
            break;
            default:
            printf("sayi asal degil");
            break;
        }
    }
    else
        printf("girilen sayi istenen aralikta degil!\n");

    return 0;
}