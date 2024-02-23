#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
	ll n,c=0;
	vector<ll>v;
	while(cin>>n)
	{
		v.push_back(n);
		sort(v.begin(),v.end());
		if(c%2==0) //array is even or odd??
		{
			ll mid=(0+c)/2;
			cout<< v[mid] <<endl;
			c++;
		}
		else
		{
			ll f_mid=(0+c)/2;
			ll s_mid=((0+c)/2)+1;
			cout << ( v[f_mid] + v[s_mid] ) / 2 <<endl;
			c++;
		}
	}
	

	
}