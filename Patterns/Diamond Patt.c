#include<stdio.h>
int main()
{
    int N,row,col;
    N=5;
    for(row = 1; row <= N; row++ , printf("\n"))
          {
                 for(col = 0; col < (N - row); col++)
                  printf(" ");
              for(col = 1; col <= (2 * row) - 1; col++)
                    printf("*");

          }
    for(row=N-1;row>=1;row--,printf("\n"))
    //for(row = 2; row <= N; row++ , printf("\n"))
    {
        for(col=0;col<(N-row);col++)
        {
            printf(" ");
        }
        for(col=1;col<=(2*row)-1;col++)
        {
            printf("*");
        }
    }
}
