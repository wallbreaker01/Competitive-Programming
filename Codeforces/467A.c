#include<stdio.h>
int main()
{
    int n,p,q,s,count=0;
    //room
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&q);
        s=q-p;
        if(q>p && s>=2)
        {
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}
