#include<stdio.h>
int main()
{
    int n,x=0;
    char s[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        if(s[1]=='+') x++;
        else if(s[1]=='-') x--;
    }
    printf("%d",x);
    return 0;
}
