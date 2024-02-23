#include<Stdio.h>
int main()
{
    int n,m,c;
    int x=0,y=0;
    scanf("%d",&n);
       while(n--)
        {
           scanf("%d%d",&m,&c);
           if(m>c) x++;
            if(m<c) y++;
        }
        if(x>y) printf("Mishka\n");
        else if(x<y) printf("Chris\n");
        else if(x==y) printf("Friendship is magic!^^\n");

    return 0;
}
