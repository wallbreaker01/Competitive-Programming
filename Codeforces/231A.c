#include<stdio.h>
int main()
{

    int n,i,a,b,c,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if((a==1&&b==1&&c==1)||(a==0&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1))
            cnt=cnt+1;
        }
    printf("%d",cnt);
    return 0;
}
