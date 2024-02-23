#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
int n;cin>>n; 
vector<int> a(n); 
for(int i=0;i<n;i++){ 
int x,y;cin>>x>>y; 
if(x<0)a[0]++; 
if(x>0)a[1]++; 
if(y<0)a[2]++; 
if(y>0)a[3]++; 
} 
int flag =0; 
for(int i=0;i<4;i++){ 
if(a[i])flag++; 
} 
cout<<((flag<=3)?"YES":"NO")<<"\n"; 

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
