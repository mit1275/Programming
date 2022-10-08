                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 ll fact(ll n)
 {
 	ll x=1;
 	for(ll i=1;i<=n;i++)
 	{
     x*=i;
 	}
 	return x;
 }           
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
 ll n;
 cin>>n;
 ll x=(n/2);
 cout<<fact(n-1)/(x)<<endl;
   
}