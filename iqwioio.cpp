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
 ll t;
 cin>>t;
 while(t--)
 {
  ll n;
  cin>>n;
  ll a[n];
  for(ll i=1;i<=n;i++)
  {
    a[i]=i;
  }
  ll x=(n*(n+1))/2;
  if(x%2!=0)
  {
  	cout<<0<<endl;
  }
  else
  {
  	ll j,i,sum=0,count=0;
  	for(i=1;i<=n;i++)
  	{
  		for( j=i+1;j<=n;j++)
  		{
  			swap(a[i],a[j]);
  			// cout<<a[i]<<
  			sum=0;
  			for(ll k=1;k<=n;k++)
  			{
  				if(sum==(x/2))
  				{
  					count++;
  					// cout<<a[i]<<" "<<a[j]<<endl;
  				}
  				sum+=a[k];
  			}
  			swap(a[i],a[j]);
  		}
  	}
  	// cout<<endl;
  	cout<<count<<endl;
  }
 } 
   
}