#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *fptr1=fopen("dosya1.txt","r+");
    FILE *fptr2=fopen("dosya2.txt","r+");
    FILE *fptr3=fopen("dosya3.txt","w");

    const char *temp1[3]={"hava soguk","okumak guzel","yagmur geliyor"};
    const char *temp2[3]={"okumak guzel","kis geliyor","hava soguk"};

    fprintf(fptr1,"%s\n%s\n%s\n",temp1[0],temp1[1],temp1[2]);
    fprintf(fptr2,"%s\n%s\n%s\n",temp2[0],temp2[1],temp2[2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (temp1[i]==temp2[j])
                fprintf(fptr3,"%s\n",temp1[i]);
        }
    }
    

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}