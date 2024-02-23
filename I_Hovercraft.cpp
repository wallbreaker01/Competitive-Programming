#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

int main()
{
    double a,b;

    double x;

    while(scanf("%lf %lf",&a,&b)!=EOF){



        x=(a+b)-(a/4);

        if(x==0) return 0;
        else printf("%.4lf\n",x);
    }

}