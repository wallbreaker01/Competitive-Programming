
#include <stdio.h>
int main()
{
    int n,h,a,count=0;
    scanf("%d %d",&n,&h);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a<=h)
        {
            count++;
        }
        else if(a>h)
        {
            count=count+2;
        }
    }
    printf("%d\n", count);
    return 0;
}
