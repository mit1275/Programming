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
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 	s.insert(a[i]);
 }
 for(ll i=0;i<m;i++)
 {
 	cin>>b[i];
 	s.insert(b[i]);
 }
 for(auto i=s.begin();i!=s.end();i++)
 {
 	cout<<*i<<endl;
 } 
   
}