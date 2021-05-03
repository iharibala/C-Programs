#include<stdio.h>
int main()
{
    static int array1[10][10];
    int i, j,  m, n;

    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter co-efficients of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array1[i][j]);

        }
    }
    printf("The given matrix before interchanging is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
                printf(" %d", array1[i][j]);
        }
        printf("\n");
    }
    int t;
    for (i = 0; i < m; ++i)
    {
        t=array1[0][i];
        array1[0][i]=array1[m-1][i];
        array1[m-1][i]=t;
    }

    printf("matrix after interchanging is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
                printf(" %d", array1[i][j]);
        }
         printf("\n");
    }

}
