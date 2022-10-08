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
ll n,x=1,res=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
for(ll i=0;i<n;i++)
{
	if(a[i]%2==0&&a[i+1]%2!=0||a[i]%2!=0&&a[i+1]%2==0)
	{
		x++;
		res=max(res,x);
	}
	else
	{
		x=1;
	}
}
cout<<res;
   
}