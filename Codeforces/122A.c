#include<stdio.h>
int main()
{
    int n,i,count=0,s[12] = {4,7,47,74,44,444,447,474,477,777,774,744};
    scanf("%d",&n);
    for(i=0;i<12;i++)
	{
		if(n%s[i]==0) count++;
	}
	if(count>0) printf("YES\n");
    else printf("NO\n");
    return 0;
}

