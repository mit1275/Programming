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
ll a[n][m];
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		cin>>a[i][j];
	}
}
for(ll i=0;i<n;i++)
{
	if(i%2==0)
	{
		for(ll j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		// cout<<endl;
	}
	else
	{
		for(ll j=n-1;j>=0;j--)
		{
			cout<<a[i][j]<<" ";
		}
		// cout<<endl;
	}
}
   
}