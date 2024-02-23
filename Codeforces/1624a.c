#include<stdio.h>
int main()
{
    int t,n,i,k,max,min,count,dif=0,a[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        max=0;
        max=a[0];
        min=0;
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(max<a[i]) max=a[i];
            if(min>a[i]) min=a[i];
        }

        printf("%d\n",max-min);
    }
}
