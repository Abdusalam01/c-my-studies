#include <stdio.h> 
#include <stdlib.h>

int main() {

    int a,b,d,c;
    scanf("%d %d %d %d",&a,&b,&d,&c);

    switch (c)
    {
    case 1:
    case 2:
    case 3:
        d = 30;     break;    
    default:
        switch (a)
        {
        case 4:
            d = 40;     break;
        case 5:
            {
                switch (b)
                {
                case 6:
                    d = 60;     break;
                
                default:
                    d = 70;
                    break;
                }
            } break;
        
        default:
            d = 80;
            break;
        }
    }

    

    printf("%d",d);

    return 0;
}