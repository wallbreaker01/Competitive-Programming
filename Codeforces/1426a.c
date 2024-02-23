#include<stdio.h>
int main()
{
    int t,n,x;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&x);
        int i=2,count=1;
        while(i<n)
        {
            i=i+x;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
