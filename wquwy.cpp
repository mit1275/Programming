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
 ll t;
 cin>>t;
 while(t--)
 {
  ll n;
  cin>>n;
  ll flag=0;
  for(ll i=1000;i<=1000000;i++)
  {
  	ll x=i;
  	set<ll>s;
  	ll ans=0,res=0;
  	while(x>0)
  	{
  		s.insert(x%10);
  		ans+=x%10;
  		x=x/10;
  		res++;
  	}
  	if(s.size()==res&&ans==n)
  	{
  		flag=1;
  		cout<<i<<endl;
  		break;
  	}
  }
  if(flag==0)
  {
  	cout<<-1<<endl;
  }
 } 
   
}