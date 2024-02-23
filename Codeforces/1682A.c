#include<stdio.h>
int main()
{
    long long t,n,i,x,count=0;
    char string[100000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",string);
        if(n%2==1) n=n/2;
        else n=(n/2)-1;
            for(i=n;i>=0;i--)
            {
                if(string[n]!=string[i]) break;
                count++;
            }
            i=n-i;
            if(x%2==0) printf("%d\n",2*i);
            else printf("%d\n",2*i-1);
    }
    return 0;
}

