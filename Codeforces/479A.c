#include<stdio.h>
int main()
{
    int a,b,c,p,q,r,s,t,u,i;
    scanf("%d%d%d",&a,&b,&c);
    p=a+(b*c);
    q=a*(b+c);
    r=a*b*c;
    s=(a+b)*c;
    t=a+b+c;
    u=(a*b)+c;
    int ara[]={p,q,r,s,t,u}, biggest=ara[0];
    for(i=0;i<6;i++)
    {
        if(ara[i]>biggest)
        {
            biggest=ara[i];
        }
    }
    printf("%d\n",biggest);
    return 0;
}
