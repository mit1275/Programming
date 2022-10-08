                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 int josh(ll n,ll k)
 {
 	if(n==1)
 	{
 		return 0;
 	}
 	else
 	{
 		return(josh(n-1,k)+k)%n;
 	}
 }           
 int main()
 {
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
  ll n,k;
  cin>>n>>k;
  cout<<josh(n,k);
}