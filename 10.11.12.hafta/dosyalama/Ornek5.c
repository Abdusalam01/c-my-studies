#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("Ornek5.txt","w+");
    if (fptr == NULL)
    {
        printf("Ornek5.txt Dosyasi Acilamadi...!!!");
        exit(1);
    }
    fprintf(fptr,"%s %d %s","busene",2022,"yilindayiz");
    fclose(fptr);
    
    if ((fptr = fopen("Ornek5.txt","r+")) == NULL)
    {
        printf("Ornek5.txt Dosyasi Okunamadi...!!!");
        exit(1);
    }
    int yil;
    char s1[15];
    char s2[15];
    fscanf(fptr,"%s %d %s",s1,&yil,s2);
    fclose(fptr);
    printf("%s %d %s\n",s1,yil,s2);


    return 0;


}