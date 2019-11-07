#include <stdio.h>

void fib(int n,int a,int b)
{
    if (a==n)
    {
        printf("%d ",a);
        return;
    }
    printf("%d ",a);
    fib(n,b,a+b);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    fib(n,a,b);
}