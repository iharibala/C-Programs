#include<stdio.h>
int main()
{

    int N,N1, row ,col,val;
    N=1;
    N1=1;
    val=5;
    for(row =1 ; row<=val ; row++,printf("\n"))
    {
        if(row %2 != 0)
        {
        N=N+row-1;
       //N=N1+1;
            for(col=1 ; col<=row ;col++)
            {
                printf("%d ",N);
                N++;
            }
        }
        else{
             N1=N+row-1;
         //N1=N;
        for(col=1;col<=row ; col++)
        {
            printf("%d ",N1);
            N1--;
        }
        }
    }
}
