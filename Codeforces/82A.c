#include<stdio.h>
int main()
{
    long long n,i=5;
    scanf("%lld",&n);
    while(n-i>0)
    {
        n=n-i;
        i=i*2;
    }
    i=i/5;
    if(n<=i) printf("Sheldon\n");
    else if(n<=2*i) printf("Leonard\n");
    else if(n<=3*i) printf("Penny\n");
    else if(n<=4*i) printf("Rajesh\n");
    else printf("Howard\n");

    return 0;
}
