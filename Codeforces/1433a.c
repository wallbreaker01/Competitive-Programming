#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        scanf("%d",&n);
        for(i=1;i<=9;i++)
        {
            int room=0;
            for(j=1;j<=4;j++)
            {
                room=room*10+i;
                count=count+j;
                if(room==n)
                {
                    printf("%d\n",count);
                    continue;
                }

            }
        }
    }
    return 0;
}
