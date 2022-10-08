                                     /*Knowing is not enough,we must apply!!*/
                                     //Kaden's Algorithm
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
ll n,maxi=0,sum=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
maxi=a[0];
for(ll i=1;i<n;i++)
{
	maxi=max(maxi+a[i],a[i]);
	sum=max(sum,maxi);
}
cout<<sum<<endl; 
}
