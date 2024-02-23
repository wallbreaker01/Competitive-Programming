#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d%d%d",&x,&y,&z);
    a=sqrt(x*z/y);
    b=sqrt(x*y/z);
    c=sqrt(y*z/x);
    printf("%d\n",4*(a+b+c));
    return 0;
}
