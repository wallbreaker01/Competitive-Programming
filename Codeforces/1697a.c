#include<stdio.h>
int main()
{
    int t,n,m,a[1000],i,j;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }


        if(sum<m) printf("0\n");
        else
        {
            int energy=sum-m;
            printf("%d\n",energy);
        }
        //sum=0;

    }
    return 0;
}
