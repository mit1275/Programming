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
  ll a[n],b[n];
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(ll i=0;i<n;i++)
  {
    cin>>b[i];
  }
  sort(a,a+n);
  sort(b,b+n,greater<ll>());
  ll x=0,ans=0,res=0;
  for(ll i=0;i<n;i++)
  {
    if(a[i]>b[i])
    {
      if(x+b[i]<=a[i+1])
      {
        x+=b[i];
      }
      else
      {
        res=a[i];
      }
    }
    else
    {
      res=max(res,a[i]);
    }
  }
  cout<<max(res,x)<<endl;

 } 
   
}