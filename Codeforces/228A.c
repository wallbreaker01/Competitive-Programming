#include<stdio.h>
int main()
{
    int a,b,c,d,count=1,total;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a!=b&&a!=c&&a!=d) count++;
    if(b!=c&&b!=d) count++;
    if(c!=d) count++;
    total=4-count;
    printf("%d\n",total);
    return 0;
}
