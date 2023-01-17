#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct 
{
    char x;
    int y;
} Nesne;

int main() {
    srand(time(0));

    Nesne dizi1[10], dizi2[10];

    for (int i = 0; i < 10; i++)
    {
        dizi1[i].x = rand() % 9 + 1;
        dizi1[i].y = rand() % 26 + 65;
        printf("Nesne %d => %2d, %2c\n",i + 1,dizi1[i].x,dizi1[i].y);
    }
    printf("\n--------------------------\n\n");

    

    FILE *fptr;
    if ((fptr = fopen("Deneme_2.txt","w+")) == NULL)
        printf("Dosya Olusturulamadi!!!");
    fwrite(dizi1,sizeof(Nesne),10,fptr);
    fseek(fptr,0,SEEK_SET);
    fread(dizi2,sizeof(Nesne),10,fptr);
    
    
    fclose(fptr);

    for(int i=0;i<10;i++){
        printf("Nesne%2d: %2d, %2c\n",i+1,dizi2[i].x,dizi2[i].y);
    }

    return 0;
}

