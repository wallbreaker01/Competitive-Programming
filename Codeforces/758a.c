#include<stdio.h>
int main()
{
    int n,i,a,max=0,x=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        max=a;
        x+=a;
    }
    printf("%d\n",n*max-x);
    return 0;
}
