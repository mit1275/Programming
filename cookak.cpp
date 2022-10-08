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
  // ll q,i=0,x=0;
 	ll q,n;
  cin>>n>>q;

  ll a[100000],b[100000];
  ll sum=0,count=0,i=0,x=0;
  while(q--)
  {
  	 cin>>a[i]>>b[i];
  	 i++;
  }
  x=i;
  // cout<<x<<endl;
  if(a[0]!=0)
  {
    count=a[0]+abs(b[0]-a[0]);
    
  }
  else
  {
    count=abs(b[0]-a[0]);
  }
    
  for(ll i=1;i<x;i++)
  {
  	count+=abs(b[i-1]-a[i]);
  	count+=abs(b[i]-a[i]);
  
  	// cout<<a[i]<<b[i]<<endl;
  }
 cout<<count<<endl;
}
   
 } 
   