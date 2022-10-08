                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
 // #ifndef ONLINE_JUDGE
 // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
 // #endif
  boost
 ll n;
 cin>>n;
 ll a[n],profit=0;
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 for(ll i=1;i<n;i++)
 {
 	if(a[i]>a[i-1])
 	{
 		profit+=(a[i]-a[i-1]);
 	}
 }
  cout<<profit<<endl; 
}