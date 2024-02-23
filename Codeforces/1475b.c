
#include<stdio.h>


int main()
{
	long long int t,n,a,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
    {
		scanf("%d",&n);
		if(n<2020)
		{
			printf("NO\n");
			continue;
        }
		long long int a=n/2020;
		n-=a*2020;
		if(n<=a) printf("YES\n");
		else printf("NO\n");

	}
	return 0;
 }



