#include<stdio.h>
int main()
{

    long long int n;
    int digit,nod;
    nod=0;
    n=1534;
    while(n!=0)
    {
        digit=digit%10;
        nod=nod+1;
        n=n/10;
    }
    printf("%d",nod);
}
