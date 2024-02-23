#include<stdio.h>
int main()
{

    int n,i,a,b,c,s1=0,s2=0,s3=0;
    scanf("%d",&n);
    while(n--)
        {
            scanf("%d%d%d",&a,&b,&c);
            s1+=a;
            s2+=b;
            s3+=c;

        }
    if(s1==0&&s2==0&&s3==0)
    printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
