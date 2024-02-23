#include<stdio.h>
int main()
{
    int n,count=0,maxx=1;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]>=s[i-1])
        {
          count++;
          //maxx= max(maxx,count);
        }
        else count= 1;
    }
    printf("%d",count);
    return 0;
}
