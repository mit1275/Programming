                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
 {
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
 ll t;
 cin>>t;
 while(t--)
 {
  ll n,a,b;
  cin>>n>>a>>b;
  string s="";
  char d='a';
  for(ll i=0;i<n;i++)
  {
  	s+=d;
  	d++;
  	if(i%b==0)
  	{
      s='a';
  	}
  }
  cout<<s<<endl;
 
 } 
   
}