                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 int normalsum(ll a[],ll n)
 {
 	ll sum=a[0],res=a[0];
  for(ll i=1;i<n;i++)
{
	sum=max(a[i],sum+a[i]);
	res=max(sum,res);
}
return (res);
 }
 int circularsum(ll a[],ll n)
 {
 	ll x=0;
 	ll maxnormal=normalsum(a,n);
 	if(maxnormal<0)
 	{
 		return (maxnormal);
 	}
 	for(ll i=0;i<n;i++)
 	{
 		x+=a[i];
 		a[i]=-a[i];
 	}
 	ll maximumcircularsum=x+normalsum(a,n);
 	return max(maximumcircularsum,maxnormal);

 }           
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
cout<<circularsum(a,n)<<endl; 
   
}