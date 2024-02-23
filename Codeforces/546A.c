#include <stdio.h>
int main(){

    int k,n,w,x,y,sum=0;
    scanf("%d%d%d",&k,&n,&w);
    for(int i=1;i<=w;i++)
    {
        x=i*k;
        sum+=x;
    }
    if(sum>n){
    y=sum-n;
    printf("%d\n",y);
    }
    else{
        printf("0\n");
    }

    return 0;
}
