
#include<stdio.h>
int main()
{
    int n,i,s[10000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    int max=s[0],min=s[0];
    for(i=0;i<n;i++)
    {
        if(max<s[i])
        {
            max=s[i];
            count++;
        }
        if(min>s[i])
        {
            min=s[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

