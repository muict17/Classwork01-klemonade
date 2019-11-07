#include <stdio.h>

int ten(int n)
{
    int i;
    int a=1;
    for (i=0;i<n;i++)
    {
        a*=10;
    }
    return a;
}

void pal(int a,int n,int i)
{
    if (i<(n-i))
    {
        if ((a/ten(n-i))%10==((a/ten(i))%10))
        {
            pal(a,n,i+1);
        }
        else
        {
            printf("not palindrome");
        }
    }
    else 
    {
        printf("palindrome");
    }
    return;
}

int main()
{
    int a;
    scanf("%d",&a);
    int n=0;
    int tmp;
    tmp = a;
    while(tmp>0)
    {
        tmp=tmp/10;
        n++;
    }
    pal(a,n-1,0);
}