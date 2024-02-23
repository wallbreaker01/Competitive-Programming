#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,a,b,c;
    scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
    if(x4>x1 && x4>x2 && x4>x3)
    {
        a=x4-x3;
        b=x4-x2;
        c=x4-x1;
        printf("%d %d %d\n",a,b,c);
    }
    else if(x3>x1 && x3>x2 && x3>x4)
    {
        a=x3-x4;
        b=x3-x2;
        c=x3-x1;
        printf("%d %d %d\n",a,b,c);
    }
    else if(x2>x1 && x2>x3 && x2>x4)
    {
        a=x2-x3;
        b=x2-x4;
        c=x2-x1;
        printf("%d %d %d\n",a,b,c);
    }
    else if(x1>x2 && x1>x3 && x1>x4)
    {
        a=x1-x3;
        b=x1-x2;
        c=x1-x4;
        printf("%d %d %d\n",a,b,c);
    }

    return 0;
}
