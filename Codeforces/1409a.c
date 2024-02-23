#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        int dif;
        if(a==b) printf("0\n");
        if(a>b) dif=a-b;
        if(a<b) dif=b-a;
        if(dif%10==0) printf("%d\n",dif/10);
        else printf("%d\n",dif/10+1);
    }
    return 0;
}
