                                     /*Knowing is not enough,we must apply!!*/

//given an array of integers and a number k,find maximum sum of k consecutive elements.
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
 {
 // #ifndef ONLINE_JUDGE
 // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
 // #endif
  boost
ll n,sum=0,k,maxi=0;
cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
for(ll i=0;i<k;i++)
{
 sum+=a[i];
}
maxi=sum;
for(ll i=k;i<n;i++)
{
  sum+=(a[i]-a[i-k]);
  maxi=max(maxi,sum);
}
cout<<maxi; 
   
}