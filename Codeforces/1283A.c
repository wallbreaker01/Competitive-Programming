#include <stdio.h>
int main() {
    int t,a,h,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        {
        scanf("%d%d",&h,&m);
        a=(23-h)*60+(60-m);
        printf("%d\n", a);
        }


return 0;
}
