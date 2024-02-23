#include<stdio.h>
int main()
{
    int n,i,l,count=0,s[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);

    }
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1]) count++;
    }

    printf("%d",count);


    return 0;
}
