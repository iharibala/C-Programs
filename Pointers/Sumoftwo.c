#include<stdio.h>
int main()
{

    int *ptr ,*ptr1,sum;
    int a=5 , b=6;
    ptr=&a;
    ptr1 =&b;
    sum = *ptr + *ptr1;
    printf("%d",sum);
}
