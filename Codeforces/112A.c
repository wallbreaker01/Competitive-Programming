#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,l,i,s=0;
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]>=65&&s1[i]<=90) s1[i]='a'+s1[i]-'A';
        if(s2[i]>=65 && s2[i]<=90) s2[i]='a'+s2[i]-'A';
    }
    if((strcmp(s1,s2))>0) printf("1\n");
    else if((strcmp(s1,s2))<0) printf("-1\n");
    else printf("0\n");
    return 0;
}
