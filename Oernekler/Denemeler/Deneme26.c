#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
  	for (int i = 0; i < (n*2) -1 ; i++) {
        for (int j = 0; j < (n*2) -1 ; j++) {
            int min;
            min =i<j? i:j;
            min = 2*n-2-i < min? 2*n-2-i:min;
            min = 2*n-2-j<min ? 2*n-2-j:min;
            printf("%d ",n-min);
        }
        printf("\n");
        
    }
    return 0;
}