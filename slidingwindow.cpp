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
 ll n,k;
 cin>>n>>k;
 ll a[n];
 ll res=0,sum=0;
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 for(ll i=0;i<k;i++)
 {
 	sum+=a[i];
 }
 res=sum;
 for(ll i=k;i<n;i++)
 {
 	sum+=(a[i]-a[i-k]);
 	res=max(sum,res);
 }
 cout<<res<<endl;
   
}