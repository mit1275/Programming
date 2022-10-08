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
ll n,sum,x=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
cin>>sum;

unordered_map<ll,ll>mp;
for(ll i=0;i<n;i++)
{
	x+=a[i];
	if(x==sum)
	{
       cout<<"Found at 0 to "<<i<<endl;
       break;
	}
	if(mp.find(x-sum)!=mp.end())
	{
		cout<<"Sum Found between "
	}
}

}