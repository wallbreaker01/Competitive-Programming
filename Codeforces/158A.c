#include<stdio.h>
int main()
{
    int i,n,k,a[100],count=0 ;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=1;i<=n;i++)
      {
           if( a[k]<=a[i] && a[i]>0) count++;
      }
      printf("%d\n",count);

      return 0;

}
