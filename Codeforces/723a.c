#include<stdio.h>
int main()
{
    int a,b,c,middle,dif1,dif2;
    scanf("%d%d%d",&a,&b,&c);
    if(b>a && a>c || c>a && a>b )
    {
    middle=a;
    dif1=abs(a-b);
    dif2=abs(a-c);
    }
    else if(a>b && b>c || c>b && b>a)
    {
        middle=b;
        dif1=abs(a-b);
        dif2=abs(b-c);
    }
    else if(a>c && c>b || b>c && c>a)
    {
        middle=c;
        dif1=abs(c-b);
        dif2=abs(a-c);
    }
    int total=dif1+dif2;
    printf("%d",total);
    return 0;

}
