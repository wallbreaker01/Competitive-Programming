#include<stdio.h>
#include<string.h>
int main()
{
    char s[7];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,l,x=0,y=0,z=0,sum,k;
        scanf("%s",s);
        l=strlen(s);
        i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='r')
            {
                for(j=i+1;j<l;j++)
                {
                    if(s[j]=='R') x=1;
                }
            }
            else if(s[i]=='g')
            {
                for(j=i+1;j<l;j++)
                {
                    if(s[j]=='G') y=1;
                }
            }
             else if(s[i]=='b')
            {
                for(j=i+1;j<l;j++)
                {
                    if(s[j]=='B') z=1;
                }
            }
            i++;
        }
        sum= x+y+z;
        if(sum==3) printf("YES\n");
        else printf("NO\n");
        x=y=z=sum=0;
    }
    return 0;
}

