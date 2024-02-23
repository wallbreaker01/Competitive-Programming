#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s",&s1);
    scanf("%s",&s2);
     for(int i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        if(s1[i]==s2[i]) printf("0");
        else printf("1");
    }
    return 0;
}
