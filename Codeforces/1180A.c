#include<stdio.h>
int main()
{
    int i,t,x,y,n,k,a=0,b=0,c=0;
    scanf("%d",&t);
    while(t--)
    {

            scanf("%d%d%d",&x,&y,&n);
            a=n/x;

            for(i=a;i>0;i--){
            c=n-(x*i);
            if(c>y)
            {
                k=x*i+y;
                printf("k=%d\n",k);
                break;
            }




            }





    }
    return 0;

}
