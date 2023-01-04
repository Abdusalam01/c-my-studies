#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n(A)");    // --> A
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n(B)\n");  // --> B
    for (int i = 10; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(C)\n");  // --> C
    for (int i = 1; i <= 10; i++)   
    {  
        for (int j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (int k = i; k <= 10; k++)  
        {  
            printf("*"); 
        }  
        printf ("\n");   
    }  

    printf("\n(D)\n");  // --> D
    for (int i = 10; i > 0; i--)   
    {  
        for (int j = i; j > 0; j--)   
        {  
            printf(" ");   
        }  
        for (int k = 10; k >= i; k--)  
        {  
            printf("*"); 
        }  
        printf ("\n");   
    }  


    
    return 0;
}