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
 ll t;
 cin>>t;
 while(t--)
 {
 	ll n;
 	cin>>n;
 	ll a[n],count[n];
 	for(ll i=1;i<=n;i++)
 	{
 		cin>>a[i];
 		count[a[i]]=i;
 	}
 	for(ll i=1;i<=n;i++)
 	{
 		cout<<count[i]<<" ";
 	}
 	cout<<endl;
 	for(ll i=1;i<=n;i++)
 	{
 		cout<<count[count[a[i]]]<<" ";
 	}
 } 
   
}