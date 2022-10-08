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
  cin>>n;
  ll a[n][n];
  for(ll i=0;i<n;i++)
  {
  	for(ll j=0;j<n;j++)
  	{
  		cin>>a[i][j];
  	}
  }
  for(ll i=0;i<n;i++)
  {
  	for(ll j=i+1;j<n;j++)
  	{
  		swap(a[i][j],a[j][i]);
  	}
  } 
   
}