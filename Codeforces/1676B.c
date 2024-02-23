#include<stdio.h>
int main()
{
    long long t,i;
    //test
    scanf("%lld",&t);
    while(t--)
    {
           long long num;
           //box
           scanf("%lld",&num);
           long long a[num],a2[num];
           for(i=0;i<num;i++)
            {
                //candy
                scanf("%lld",&a[i]);
            }
            long long smallest=a[0];
            for(i=1;i<num;i++)
            {
                if(a[i]<smallest)
                {
                    smallest=a[i];
                }
            }
            for(i=0;i<num;i++)
            {
                a2[i]=a[i]-smallest;
            }
            long long sum=0;
            for(i=0;i<num;i++)
            {
                sum=sum+a2[i];
            }
            printf("%lld\n",sum);
    }

return 0;
}
