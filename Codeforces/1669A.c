#include<stdio.h>


int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%d",&x);
        if(1900<=x) printf("Division 1\n");
        else if(1600<=x && x<=1899) printf("Division 2\n");
        else if(1400<=x && x<=1599) printf("Division 3\n");
        else printf("Division 4\n");
        }

    return 0;
}
