#include<stdio.h>
int main()
{

    int N,row,col;
    N=5;
    for(row=N ; row>=1 ;row--,printf("\n"))
    {
        for(col=1 ; col<=N ;col++)
        {
            printf("*");
        }
    }
}
