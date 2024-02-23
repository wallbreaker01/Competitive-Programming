#include<stdio.h>
int main()
{
    int a,b,sum=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;;i++)
    {
        sum=sum+a;
        if(sum%10==0 || sum%10==b)
        {
            printf("%d\n",i);
            break;
        }
        else continue;
        //i++;
    }
    return 0;
}
