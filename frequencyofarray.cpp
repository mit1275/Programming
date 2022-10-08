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
unordered_map<ll,ll>mp;
for(ll i=0;i<n;i++)
{
	cin>>a[i];
	mp[a[i]]++;
}
for(auto x:mp)
{
	cout<<x.first<<" "<<x.second<<endl;
}
   
}