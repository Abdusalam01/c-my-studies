#include <stdio.h>
#include <stdlib.h>
int main()
{
     int a=3,c=1,b;
    
    /*
        printf("a digerini yaz:");
        scanf("%d",&a);
        if(a<0)
            switch (c)
            {
                case 1:
                    b=4;
                    break;
                case 2:
                    b=5;
                    break;
                
                default:
                    b=8;
                    break;
            }
        else
            b=9;
    */
  
     b=(a<0)?(c==1)?4:(c==2)?5:8:9;
    
    
    printf("b : %d", b);
    return 0;
}