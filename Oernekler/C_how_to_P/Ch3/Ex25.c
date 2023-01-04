#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 0, i = 1, b = 0;

    printf("1 ile 10 araliginda bir (A) Degeri giriniz: ");
    scanf("%d",&a);

    printf("\nA\t A + 3\t A + 6\t A * 9\n");
    do
    {
        b = a * i;
        for (int k = 0; k < 10; k += 3)
        {
            switch (k)
            {
            case 0:     case 3:     case 6:
                printf("%d\t ",b+k);    
                break;
            
            default:
                printf("%d",b*9);
                break;
            }
        }
        printf("\n");
        i++;
    } while (i < 6);
    
    
    return 0;
}