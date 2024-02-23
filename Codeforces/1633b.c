#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000000];
        int count1=0,count2=0;
        scanf("%s",s);
        int l=strlen(s);
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0') count1++;
            else if(s[i]=='1')count2++;
        }
        if(count1==count2) printf("%d\n",count1-1);
        else if(count1>count2) printf("%d\n",count2);
        else printf("%d\n",count1);

    }
    return 0;
}
