#include<stdio.h>
int main()
{

    int arr[10][10];
    int i=0,j=0,row=0,col=0;
    int flag=0;
    printf("Enter row and col size\n");
    scanf("%d%d",&row,&col);
    printf("Enter ele of Mat\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j&&arr[i][j]!=1)
            {
                flag=-1;
            }
            else if(i!=j&&arr[i][j]!=0)
            {
                flag=-1;
            }
        }
    }
    if(flag==0)
    {
        printf("Identity Mat");
    }
    else
    {
        printf("Not an Identity Mat");
    }
}
