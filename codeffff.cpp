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
ll n,count=0,x=0,sum=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
	if(a[i]==1)
	{
		count++;
	}
}
cout<<count<<endl;
for(ll i=0;i<n;i++)
{
	if(a[i+1]==1)
	{
	  cout<<a[i]<<" ";
	}
}
{
	cout<<a[n-1];
}
// cout<<Endl   
}