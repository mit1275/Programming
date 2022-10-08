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
 ll a[n],res=0,lmaxc[n],rmaxc[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 lmaxc[0]=a[0];
 for(int i=1;i<n;i++)
 {
 	lmaxc[i]=max(lmaxc[i-1],a[i]);
 }
 rmaxc[n-1]=a[n-1];
 for(ll i=n-2;i>=0;i--)
 {
 	rmaxc[i]=max(rmaxc[i+1],a[i]);
 }
 for(ll i=0;i<n-1;i++)
 {
 	res+=(min(lmaxc[i],rmaxc[i])-a[i]);
 }
 cout<<res<<endl;   
}