#include<stdio.h>
int main()
{
    int t,n,i,s[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
            if(s[i]==s[i+1])
                printf("YES\n");
        }

    }


    return 0;
}

