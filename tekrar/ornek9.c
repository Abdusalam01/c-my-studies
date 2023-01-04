#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no;
    FILE *dr1=fopen("d1.txt","r");
    FILE *dr2=fopen("d2.txt","r");
    FILE *dr3=fopen("d3.txt","w");
    fprintf(dr1,"%d\n%d\n%d\n",23,8,5);
    fprintf(dr2,"%d\n%d\n%d\n",9,2,-7);

    while (fscanf(dr1,"%d",&no)!=EOF)
    {
        fprintf(dr3,"%d\n",no);
    }
    while (fscanf(dr2,"%d",&no)!=EOF)
    {
        fprintf(dr3,"%d\n",no);
    }
    fclose(dr1);
    fclose(dr2);
    fclose(dr3);
    
    
    return 0;
}