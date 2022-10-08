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
 ll m;
 cin>>m;
 // ll res=0;
 sort(a,a+n);
 ll res=a[m-1]-a[0];
 for(ll i=1;i+m-1<n;i++)
 {
 	res=min(res,a[m+i-1]-a[i]);
 }
cout<<res;
   
}