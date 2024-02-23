#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    // priority_queue< ll, vector<ll>, greater<ll> >queue;
    ll  n;
    while(cin>>n && n!=0)
    {
        priority_queue< ll, vector<ll>, greater<ll> >queue; //decending order e queue
        ll s[n];
        for (ll i = 0 ; i < n ; i++)
        {
            cin>>s[i];
            queue.push(s[i]);
        }
        ll first,second,sum=0;
        while(queue.size() > 1)
        {
            first=queue.top();
            queue.pop();
            second=queue.top();
            queue.pop();
            sum=sum+first+second;
            queue.push(first+second);
        }
        cout<<sum<<endl;  
    }
   
}