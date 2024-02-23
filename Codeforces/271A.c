#include<stdio.h>
int main()
{
    int y,a,b,c,d;
    scanf("%d",&y);
    for(int i=y;i>0;i++)
    {
        y++;
        a=y/1000;
        b=(y%1000)/100;
        c=(y%100)/10;
        d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=c &&b!=d && c!=d)
        {
            break;
        }
    }
    printf("%d\n", y);
    return 0;
}
