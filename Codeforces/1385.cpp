#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,m,n;
        cin>>x>>y>>z;
        m= max(x,y);
        m= max(m,z);
        n= min(x,y);
        n= min(n,z);
        int a=(x+y+z-m-n);
        if(x!=y && y!=z && x!=z) cout<<"NO"<<endl;
        else if(x==y && y==z && z==x)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
       else if(a==n && m!=n) cout<<"NO"<<endl;
       else
       {
           cout<<"YES"<<endl;
           cout<<m<<" "<<n<<" "<<n<<endl;
       }
    }
}

