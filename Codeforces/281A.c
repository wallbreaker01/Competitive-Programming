#include<stdio.h>
int main()
{
    int i;
    char s[1000];
    scanf("%s",&s);
    for(i=0;i<1000;i++)
    {
        if(s[0]>='a'&&s[0]<='z') s[0]='A'+s[0]-'a';
    }
    printf("%s",s);
    return 0;
}
