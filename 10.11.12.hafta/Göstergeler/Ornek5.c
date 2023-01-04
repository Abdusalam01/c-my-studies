#include<stdio.h>
#include<stdlib.h>

int main(){
    char *ilk_bahar[3] = {"Mart", "Nisan", "Mayis"};
    char *yaz[3] = {"Haziran", "Temmuz", "Agustos"};
    char *son_bahar[3] = {"Eylul", "Ekim", "Kasim"};
    char *kis[3] = {"Aralık", "Ocak", "Subat"};

    char **mevsimler[4];
    mevsimler[0] = ilk_bahar;
    mevsimler[1] = yaz;
    mevsimler[2] = son_bahar;
    mevsimler[3] = kis;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%s\t\t",mevsimler[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    char *stg1[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    printf("%s\n",stg1[0]);
    printf("%s\n",stg1[1]);
    printf("%s\n",stg1[2]);
    printf("%s\n",stg1[3]);
    
    
    return 0;
}