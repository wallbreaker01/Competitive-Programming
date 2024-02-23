#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a%b==0) printf("0\n");
        else if(b>a) printf("%d\n",b-a);
        else if(a>b && a%b!=0) printf("%d\n", b-(a%b));
    }

    return 0;
}
