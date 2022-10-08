                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
} 
for(ll cs=0;cs<n-1;cs++)
{
	ll pos=cs;
	ll item=a[cs];
	for(ll j=cs+1;j<n;j++)
	{
		if(a[j]<item)
		{
			pos++;
		}
	}
	swap(item,a[pos]);
	while(cs!=pos)
	{
		pos=cs;
		for(ll i=cs+1;i<n;i++)
		{
			if(a[i]<item)
			{
				pos++;
			}
		}
		swap(item,a[pos]);
	}

}
for(ll i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
   
}