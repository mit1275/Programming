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
  ll n,x=0,count=0;
  cin>>n;
  ll a[n];
    vector<int> dp=vector<int>(n,0);
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    ll b,c;
    for(ll i=n-1; i>=0; i--)
    {
      if(i+1<n)
      {
        x=dp[i+1];
      }
      else
      {
        x=0;
      }
      count=a[i];
      if(count-1+i<n)
      {
        b=1;
      }
      else
      {
        b=0;
      }
      if(count+i<n)
      {
        b+=dp[count+i];
      }
      dp[i]=max(x,b);
    }
    cout<<dp[0]<<"\n";
 } 
   
}
    