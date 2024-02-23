#include<stdio.h>
int main()
{
	int t,n,i,s[200],count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<2*n;i++)
        {
            scanf("%d",&s[i]);
            if(s[i]%2!=0) count++;
        }
        count==n?printf("YES\n"): printf("NO\n");
        count=0;
	}
	return 0;
}
