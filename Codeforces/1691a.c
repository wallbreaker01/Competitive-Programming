#include <stdio.h>
int main()
{
    int t,n,x,count1=0,count2=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%2==0) count1++;
            else count2++;
        }
        if(count1==n ||count2==n) printf("0\n");
        else if(count1>=count2) printf("%d\n",count2);
        else printf("%d\n",count1);
        count1=0;
        count2=0;
    }
    return 0;
}
