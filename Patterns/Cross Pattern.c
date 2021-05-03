#include<stdio.h>
int main()
{

    int i,j;
    int len=3;
   /* for(i=1;i<=len;i++,printf("\n"))
    {

        for(j=1;j<=len;j++)
        {
            if(j==i || j== (len+1-i))*/
          for(i=0;i<len;i++)
           {
           for(j=0;j<len;j++)

             {
                if(i==j || i+j==len-1)
              {
                printf("*");
              }
            else{
                printf(" ");
             }

             }
             printf("\n") ;
            }
}
