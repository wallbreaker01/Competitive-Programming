#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


 #include<bits/stdc++.h> using namespace std; #define m 1000003

long long int f[m];
int main() 
{ long long int i;


f[0]=1; for(i=1;i<m;i++){ f[i]=(((i%m)*(f[i-1]%m))%m); }

long long int t,c=0;

scanf("%lld",&t);
while(t--)
{
    long long int n,r,x,y,z,ans,res;
    scanf("%lld %lld",&n,&r);

    //modular multiplication of r! and (n-r)!
    x=((f[n-r]%m)*(f[r]%m))%m;

    //modular multiplicative inverse of x
    y=bigmod(x,m-2);

    //modular multiplication of n! and y
    z=((f[n]%m)*(y%m))%m;

    printf("Case %lld: %lld\n",++c,z);
}
return 0;
}