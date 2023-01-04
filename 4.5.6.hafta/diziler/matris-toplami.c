#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    
    int a[3][3]={5,7,9,  0,3,0,  7,5,1};
    int b[3][3]={3,3,1,  2,1,3,  1,0,0};
    int c[3][3];    
    int i, j;
    int k,toplam;
    printf("A matrisi: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",a[i][j]);            
        }
        printf("\n");        
    }
    printf("B matrisi: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("C matrisi = A + B \n");
    printf("C matrisi: \n");
    for (i = 0; i < 3; i++)
    {
        for (j= 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    /* matris çarpımı      daha tamamlanmadı.
    int e[3][3];
    int k,toplam;
    printf("\n");
    printf("A * B = E matrisi\n");
    printf("E matrisi: \n");
    for ( i = 0; i < 3; i++)
    {
        for (j= 0; j < 3; j++)
        {
            for ( k = 0; k < 3; k++)
            {
                toplam=0;
                toplam +=a[i][k]*b[k][j];
                e[i][j]=toplam;
                for ( i = 0; i < 3; i++)
                {
                   for (j= 0; j < 3; j++)
                   {
                     printf("%4d",e[i][j]);
                   }
                }
            }
            
                        
        }     
        printf("\n");  
    }
    */
    
    return 0;
}