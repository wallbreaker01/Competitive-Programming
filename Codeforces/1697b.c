#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,q,x,y,i,count=0,sum=0;

    scanf("%d%d",&n,&q);
    int p[n+1],a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    sort(p,p+n);
    reverse(p,p+n);
    a[0]=0,count++;
    for(i=0;i<x;i++)
    {
        sum=sum+p[i];
        a[count]=sum;
        count++;
    }
    while(q--)
    {
        scanf("%d%d",&x,&y);
        printf("%d",a[x]-a[x-y]);
    }
    return 0;
}
