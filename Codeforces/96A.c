#include<stdio.h>
int main()
{
    int n,i,m=0,l;
    char s[100];
    while(scanf("%s",s)!=EOF)
    {
    l=strlen(s);
    for(i=0;i<l-6;i++)
    {
        if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1'&&s[i+6]=='1')
        {
            m=7;
            break;
        }
        if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0'&&s[i+6]=='0')
        {
            m=7;
            break;
        }
    }
    if(m==7) printf("YES\n");
    else printf("NO\n");
    }
    return 0;
}
