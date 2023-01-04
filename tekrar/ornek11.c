#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *tam=fopen("tamsayi.txt","r");
    int a;
    int toplam=0,ortalama=0,max=0;
    fprintf(tam,"%d\n %d %d %d %d %d",2342,6243,6426,6343,6345,1231);

    while (fscanf(tam,"%d",&a)!=EOF)
    {
        toplam+=a;
        if (max<a)
            max=a;
    }
    ortalama=toplam/6;
    printf("ortlama %d\n",ortalama);
    printf("girilen en buyuk sayi %d\n",max);
    fclose(tam);
    return 0;
}