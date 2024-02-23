#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    char s1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
    s2[100];

    scanf("%d",&n);
    scanf("%s",s2);
    for(j=0;j<n;j++)
    {
        s2[j]=toupper(s2[j]);
    }
    for(i=0;i<26;i++ )
    {
        for(j=0;j<n;j++)
        {
            if(s1[i]==s2[j])
            {
                count++;
                break;
            }
        }

    }
    if(count==26) printf("YES\n");
    else printf("NO\n");
    return 0;
}
