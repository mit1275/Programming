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
 ll n,minv=0,res;
 cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 minv=a[0];
 res=a[1]-a[0];
 for(ll i=1;i<n;i++)
 {
   res=max(res,a[i]-minv);
   minv=min(minv,a[i]);
 }
 cout<<res;  
}