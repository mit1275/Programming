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
ll n,m;
cin>>n>>m;
ll a[n],b[m];
 unordered_set<ll>s;
 unordered_set<ll>s1;
for(ll i=0;i<n;i++)
{
	cin>>a[i];
	s.insert(a[i]);
}
ll x=0;
for(ll i=0;i<m;i++)
{
	cin>>b[i];
}
for(ll i=0;i<m;i++)
{
	if(s.find(b[i])!=s.end())
	{
		x++;
       s1.insert(b[i]);
		// s.erase(b[i]);
	}
}
cout<<x<<endl;
for(auto i=s1.begin();i!=s1.end();i++)
{
  cout<<*i<<endl;
}

}