#include<stdio.h>
int main()
{
    int n,i,a,sum=0,count=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a>=0) sum=sum+a;
        else
        {
            if(sum==0) count++;
            else sum--;
        }
    }
    printf("%d",count);
    return 0;
}
