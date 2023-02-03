#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;
    if ((fptr = fopen("Ornek4.txt","w")) == NULL)
        printf("Dosya olusturulamadi!!!");

    for (int i = 0; i < 26; i++)
    {
        fprintf(fptr,"%d\t%c\n",i+1,'A'+i);
    }
    char semboller[] = "!  '   ^   +   &   /   (   )   =   ?   -";

    int b = fwrite(semboller,sizeof(char),sizeof(semboller),fptr);
    fprintf(fptr,"\n");
    for (int i = 0; i < sizeof(semboller); i++)
    {
        fputc(semboller[i],fptr);
    }
    
    fclose(fptr);

    if ((fptr = fopen("Ornek4.txt","r")) == NULL)
        printf("Dosya acilamadi!!!");

    char veri[27];

    int gezgin = 0;
    char x;

    for(;;)
    {
        gezgin++;
        x = fgetc(fptr);
        if (x == EOF)
            break;
        if (x == 'Z')  // Y yerine istediginiz bir karakteri girip o karakterderden sonraki verielri dosyadan okuya bilirsiniz
            break;
    }
  
    
    for(;;){
        fseek(fptr,gezgin,SEEK_SET);
        x = fgetc(fptr);
        if(x == EOF)
            break;
        printf("%c",x); 
        gezgin++;
    }

    fclose(fptr);


    return 0;
}