#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int N = 5;

int ust(int M[][N], int satir, int sutun) {

    if(satir == 0 && sutun == 1)
        return M[satir][sutun];
    else if(sutun == satir)
        return ust(M, satir - 1, N - 1);
    else
        return ust(M, satir, sutun - 1) +
    M[satir][sutun];
}

int main() {
    srand(time(0));
    
    int matris[N][N],i = 0,j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            matris[i][j] = rand() % 10 + 1;
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    i = ust(matris,N-2,N-1);

    printf("\nToplam: %d\n",i);
    
    return 0;
}