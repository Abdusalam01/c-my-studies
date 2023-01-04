#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b,c,d;
    a=b=c=d=0;
    printf("a, b, c sayilarini aralarina bosluk birakarak giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    /*d=(a==1)?(b==10)?d:(b==20)?-1:-2:(a==2||a==3)?
    (c==100 || c==200) ? -3 : (c==300) ? -4 : -5 : -6 ;*/



    switch (a)
    {
        case 1:
        {
            switch (b)
            {
            case 10:
                d = d;
                break;
            case 20:
                d = -1;
                break;
            default:
                d = -2;
                
            }
        }break;
        
        case 2:
        case 3:
        {
            switch (c)
            {
                case 100:
                case 200:
                    d = -3;
                    break;
                case 300:
                    d = -4;
                    break;
                default:
                    d = -5;     
            }
        }break;
        
        default:
            d = -6;
            break;
    }

    printf("d: %d\n", d);

    
    return 0;
}