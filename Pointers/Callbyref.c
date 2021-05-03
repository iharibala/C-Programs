#include<stdio.h>
int main()
{

    int *ptr1, *ptr2 , sum , a=5, b=6;
    ptr1= &a;
    ptr2= &b;
    sum = add(ptr1, ptr2);
    printf("%d",sum);
return 0;
}
int add(int* val1 , int* val2)
{
    int tot;
    tot= *val1 + *val2;
    //printf("Inside fun:%d\n",tot);
    return tot;
}
