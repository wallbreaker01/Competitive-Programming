
#include<stdio.h>
int main()
{
    int a,i,j=0;

    scanf("%d",&a);
    int ara[a];
    for(i=0;i<a;i++)
    {
       scanf("%d",&ara[i]);
       if(ara[i]==1)
       {
           j++;
       }
    }

    if(j==0) printf("EASY\n");
    else printf("HARD\n");


    return 0;
}
