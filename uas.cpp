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
  ll n,x;
  cin>>n>>x;
  ll a[n];
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  ll count=0,sum=0;
  if(a[0]<=x)
  {
    cout<<1<<endl;
  }
  else
  {
    while(a[0]>x)
    {
      a[0]=a[0]-x;
      a[0]=2*a[0];
      x=2*x;
      count++;
    }
    cout<<count<<endl;
  }
 } 
   
}