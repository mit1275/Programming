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
ll n,sum=0,k;
cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
   unordered_set<int>s;
   for(ll i=0;i<n;i++)
   {
   	ll x=k-a[i];
   	if(s.find(x)!=s.end())
   	{
   		cout<<"pair with given sum "<<x<<" "<<a[i]<<endl;
   		break;
   	}
   	else
   	{
   		s.insert(a[i]);
   	}
   }
}