#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=3,b,d=-100;
    b=(c==1||c==2)?5:(c==3)?(d>0)?6:7:8;
    printf("b digeri: %d",b);
   
   /* ***** ternary acılımı *****
    switch (c)
    {
     case 1:
     case 2:
        b=5;
        break;
     case 3:
         if (d>0)
           b=6;
         else
           b=7;
          break;
     default:
        b=8;
    }
    printf("b digeri: %d",b);
*/

   /* ***** ternary if...else ile açılımı ******
   if ((c==1)||(c==2))
    b=5;
    else if ((c==3)&&(d>0))
    b=6;
    else if (d<0)
    b=7;

    else 
    b=8;
    printf("b digeri: %d",b);*/

    return 0;
}