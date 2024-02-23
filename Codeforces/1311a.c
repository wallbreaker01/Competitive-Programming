#include<stdio.h>
int main()
{
    int t,a,b,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            if((a-b)%2==0) x=1;
            else x=2;
        }
        else if(b>a)
        {
            if((b-a)%2==0) x=2;
            else x=1;
        }
        else if(a==b) x=0;
        printf("%d\n",x);
    }
    return 0;
}
