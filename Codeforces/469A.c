#include<stdio.h>
int main()
{

    int n,i,p,q,s[100],count=0;
    scanf("%d%d",&n,&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d",&q);
    for(i=p;i<p+q;i++)
    {
        scanf("%d",&s[i]);
    }
    qsort(s,s+(p+q));
    for(i=0;i<p+q;i++)
    {
            if(s[i]!=s[i+1])
            {
                count++;
            }
    }
        if(n==count) printf("I become the guy.\n");
        else printf("Oh, my keyboard!");
    return 0;
}
