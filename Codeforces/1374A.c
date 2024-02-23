#include<stdio.h>
int main()
{
    int t,x,y,z,n;
    scanf("%d",&t);
    while(t--)
        {
            scanf("%d %d %d",&x,&y,&n);
            z=(n-y)/x;
            printf("%d\n",z*x+y);
        }
    return 0;
}
