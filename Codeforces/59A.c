#include<stdio.h>
#include<string.h>
int main()
{
    int i,count1=0,count2=0,l;
    char s[100];
    while(scanf("%s",&s)!=EOF)
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]>=65&&s[i]<=90) count1++;
            if(s[i]>=97&&s[i]<=122) count2++;
        }
        if(count1>count2) printf("%s\n",strupr(s));
        else if(count1<count2) printf("%s\n",strlwr(s));
        else if(count1==count2) printf("%s\n",strlwr(s));
    }
    return 0;
}
