#include<stdio.h>
int main()
{
    int n,a[]={100,20,10,5,1},count=0;
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        count+=n/a[i];
        n=n%a[i];
    }
    printf("%d\n",count);
    return 0;
}
