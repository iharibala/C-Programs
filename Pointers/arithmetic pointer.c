#include<stdio.h>
int main()
{
     int a[5]={1,2,3,4,5};
     int *ptr=&a;
//1:1004
//2:1008
//3:1012
    // printf("%p\n",ptr);
    // ptr++;    //moves addr - 4bytes(since arr is int datatyp)
    // ptr--;
    printf("value of ptr :%d\n",*(ptr+1));
    // ptr+1;   //ptr value won't be changed:  values do
    // ptr-1;
    // &a+1;    //prints 1024 (since size of a is 20)
    // &a-1;

    // printf("%p",ptr++);
     return 0;
}
