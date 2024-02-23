#include<stdio.h>
int main()
{
    int n,x;
    char s[50];
    scanf("%d",&n);
    scanf("%s",&s);
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1]) x++;
    }
    printf("%d\n",x);
    return 0;

}
