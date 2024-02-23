#include<stdio.h>
#include<string.h>
int main()
{

    char s[1000];
    int i,length,p,n,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",s);
        length=strlen(s);

        if(length>10)
            printf("%c%d%c\n",s[0],length-2,s[length-1]);
        else
            printf("%s\n",s);
    }
}
