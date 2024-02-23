#include<stdio.h>
int main()
{
    int t,a,b,c,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
        int need=0;
        if(x>=a)
        {
            need+=(x-a);
        }
        if(y>=b)
        {
            need+=(y-b);
        }
        if(need<=c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
