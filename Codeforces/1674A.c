
#include<Stdio.h>
int main()
{
    int t,x,y;

    scanf("%d",&t);
       while(t--)
       {
           scanf("%d%d",&x,&y);
           if(y%x==0)
           {
               int b=y/x;
               int a=b/b;
               printf("%d %d\n",a,b);
           }
           else printf("0 0\n");
       }
       return 0;

}
