#include <stdio.h>
int main()
{
    int n,i,s[10],count=1;
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        scanf("%d",&s[i]);
    }
    i=0;
    int t=s[0];
    while(t<n)
    {
        i++;
        i%=7;
        t+=s[i];
    }
    printf("%d",i+1);
    return 0;

}
