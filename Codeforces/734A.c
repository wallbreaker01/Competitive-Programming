#include<stdio.h>
int main()
{
    int n,i,count1=0,count2=0;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",&s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A') count1++;
        else  count2++;
    }
    if(count1>count2) printf("Anton\n");
    else if(count1<count2) printf("Danik\n");
    else if(count1==count2) printf("Friendship\n");
    return 0;
}

