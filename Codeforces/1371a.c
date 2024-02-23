
#include<stdio.h>
int main()
{
    int t,n,i,x=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        x=n/2;
        if(n%2==1) x++;
        printf("%d\n",x);
    }
    return 0;
}
