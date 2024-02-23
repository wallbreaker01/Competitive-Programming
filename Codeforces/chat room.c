#include<stdio.h>
int main()
{
    int n,length,count=0;
    char s[100];
    scanf("%s",s);
    n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if (s[i]=='h' && count==0) count++;
        else if (s[i]=='e' && count==1) count++;
        else if (s[i]=='l' && count==2) count++;
        else if (s[i]=='l' && count==3) count++;
        else if (s[i]=='o' && count==4) count++;
        if (count==5) break;
    }
    if(count==5) printf("YES\n");
    else printf("NO\n");
    return 0;
}
