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
  ll n,m,q,count=0;
  cin>>n>>m>>q;
  ll a[q],b[q];
  map<ll,ll>mp;
  map<ll,ll>mapy;
  for(ll i=0;i<q;i++)
  {
  	cin>>a[i]>>b[i];
  	mp[a[i]]++;
  	mapy[b[i]]++;
  }
  for(auto i=mp.begin();i!=mp.end();i++)
  {
  	if(i->second%2!=0)
  	{
  		count++;
  	}
  }
   for(auto i=mapy.begin();i!=mapy.end();i++)
  {
  	if(i->second%2!=0)
  	{
  		count++;
  	}
  }
  cout<<count<<endl;

 } 
   
}