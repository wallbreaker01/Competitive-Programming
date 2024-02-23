#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,c;
        scanf("%d",&n);
        if(n%7==0) printf("%d\n",n);
        else
        {
            a=n%7;
            b=7-a;
            c=n%10;
            if(c+b<10) n=n+b;
            else n=n-a;
            printf("%d\n",n);
        }
    }
    return 0;
}
