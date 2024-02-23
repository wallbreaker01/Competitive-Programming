#include<stdio.h>
#include<string.h>
int main()
{

    char s[100];
    scanf("%s",s);
    int f,count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(s[i] == s[j])
            {
                f=1;
                break;
            }
        }
        if(f==0) count++;
        f=0;
    }
    if(count%2!=0)  printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");

    return 0;
}

