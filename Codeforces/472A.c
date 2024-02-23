#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);
    if(n%2==0)
    {
        x=n-8;
        printf("%d 8\n",x);
    }
    else if(n%2!=0)
    {
        x=n-9;
        printf("%d 9\n",x);
    }
    return 0;
}
