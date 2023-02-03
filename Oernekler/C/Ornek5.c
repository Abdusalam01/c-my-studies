#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fptr;
    
    if((fptr = fopen("Ornek5.txt","w"))==NULL)
        printf("Dosya olusturulamadi!!!");
    
    for (int i = 0; i < 26; i++)
    {
        fprintf(fptr,"%c\t",'A'+i);
    }
    fclose(fptr);

    if((fptr = fopen("Ornek5.txt","r+")) == NULL)
        printf("Dosya Acilamadi!!!");
    
    char x;
    for (;;)
    {
        x = fgetc(fptr);
        if(x == EOF){
            printf("Tum veri okundu");
            break;}
        if(x == 'G'){
            fseek(fptr,-1,SEEK_CUR);
            fputc('X',fptr);
            printf("G harfi X harf ile degistirildi\n");
            break;
        }
    }
    
    

    fclose(fptr);

    return 0;
}