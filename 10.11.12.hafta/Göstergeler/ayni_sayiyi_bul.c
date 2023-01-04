#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ortaklari_bul(int x[],int y[],int z[],int n)   // a dizisine karşılık x dizisi 
                                                    // b dizisine karşılık y dizisi 
                                                    // c dizisine karşılık z dizisi. 
{
    int i,j,k,sayac=0;
    for ( i = 0; i < n; i++)
    {
        for ( k = 0; k < i; k++)
        {
            if (x[k]==x[i])
                break;
        }
        if(k!=i) // yani break calistiysa (x[i] daha once aranmişsa)
            continue; // alttaki kalan kısımı calistirma bir sonraki itirasyona geç.

        for ( j = 0; j < n; j++)
        {
            if (x[i]==y[j])
                break;
        }
        if(j!=n) // j n den farıklı ise break çalıştı demektir.
            z[sayac++]=x[i];
    }
    
}
int main()
{
    srand(time(0));
    int a[30],b[30],c[31];
    int n=30;
    for (int i = 0; i < n; i++)
    {
        a[i]=(rand()%100)+1;
        b[i]=(rand()%100)+1;
    }
    printf("Ilk dizi elemanlari: \n");
    for (int i = 0; i < n; i++)
        printf("%d ",a[i]);

    printf("\nikinci dizi: \n");
    for (int i = 0; i < n; i++)
        printf("%d ",b[i]);

    for (int i = 0; i < n+1; i++)
    {
        c[i]=-1;
    }
    ortaklari_bul(a,b,c,n);
    if(c[0]==-1)
        printf("\n\nOrtak eleman bulunamadi!!!");
    else{
        printf("\n\nBulunan ortak elemanlar : ");
        int e=0;
        while (c[e]!=-1)
        {
            printf("%d ",c[e++]);
        }
    }
    return 0;
}