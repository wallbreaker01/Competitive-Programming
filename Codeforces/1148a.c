#include<stdio.h>
int main()
{
    long long int a,b,c,sum;
    scanf("%lld%lld%lld",&a,&b,&c);
    c=c*2;
    if(a>b) sum=2*b+c+1;
    else if(a<b) sum=2*a+c+1;
    else if(a==b) sum=2*a+c;
    printf("%lld\n",sum);
}

