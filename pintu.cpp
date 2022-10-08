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
  ll l,r,z;
  cin>>l>>r>>z;
  ll x=r-l+1;
  if(z<=x)
  {
  	cout<<z<<endl;
  }
  // else if(z<x)
  // {
  // 	cout<<z<<endl;
  // }
  else
  {
  	cout<<x<<endl;
  }
 } 
   
}