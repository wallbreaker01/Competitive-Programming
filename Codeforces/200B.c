#include<stdio.h>
int main()
{
    int n,s[100];
    float ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        ans=ans+s[i];
    }
    printf("%f\n",ans/n);
    return 0;

}
