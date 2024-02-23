#include<stdio.h>
int main()
{
    int a,b,year ;
    scanf("%d%d",&a,&b);
    for(int i=0;i<=10;i++)
    {
        if(a<=b)
        {
            a=a*3; b=b*2;
            year++;
        }
        else
        {
            break;
        }
    }
    printf("%d",year);
    return 0;
}
