#include <stdio.h>
#include <stdlib.h>

int main(){
     float odev1,odev2,odev3;
         float quiz1,quiz2,quiz3;
             float ara_sinav1,ara_sinav2;
                 float Final_sinavi; 
                     float ders_notu;
                     printf("3 odev notunu yanyana gir: ");
                     scanf("%f %f %f",&odev1,&odev2,&odev3);
                 printf("3 quiz notunu yanyana gir: ");
                 scanf("%f %f %f",&quiz1,&quiz2,&quiz3);
             printf("2 ara_sinavi yanyana gir: ");
             scanf("%f %f",&ara_sinav1,&ara_sinav2);
         printf("Final_sinavi gir: ");
         scanf("%f",&Final_sinavi);
    
    ders_notu= odev1*0.03+odev2*0.03+odev3*0.03+
               quiz1*0.07+quiz2*0.07+quiz3*0.07+
               ara_sinav1*0.15+ara_sinav2*0.15+
               Final_sinavi*0.4;
    
    printf("ders notu: %.2f\n",ders_notu);

    return 0;
}