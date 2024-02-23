
#include<stdio.h>
int main(){
    int t,n,i,p,a,b,c,d,e,f,g,h;
    scanf("%d", &t);
    while(t--)
    {
            scanf("%d",&n);
            a=n%10;
            b=(n/10)%10;
            c=(n/100)%10;
            d=(n/1000)%10;
            e=(n/10000)%10;
            f=(n/100000)%10;
            g=a+b+c;
            h=d+e+f;
            if(g==h)  printf("YES\n");
            else printf("NO\n");
        }

return 0;
}



