#include<stdio.h>
#include<stdlib.h>
int main()
{
    char temp[10]="Abdusalam";
    char f;
    FILE *tekrar=fopen("tekrarlama.txt","w+");
    if (tekrar==NULL)
        printf("dosya olusamadi");
    else 
    {    
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < i; j++)
            {
                fputc(temp[j],tekrar);
                printf("%c",temp[j]);
            }
            
            
        }
    }
    fclose(tekrar);
    return 0;
}