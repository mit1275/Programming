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
  string a,d,e,f;
  cin>>a;
  d=a;
  e=a;
  char b,c;
  ll n=a.size();
  ll x=n;
  // cout<<a[n];
  b=a[n-1];
  a[n-1]=a[0];
  for(ll i=1;i<n-1;i++)
  {
  	a[i-1]=a[i];
  }
  a[n-2]=b;
  if(d!=a)
  {
  	cout<<"NO"<<endl;
  }
  // else
  {
  	c=e[0];
  	e[0]=e[x-1];
  	e[1]=c;
  	for(ll i=1;i<n-1;i++)
  	{
  		e[i+1]=e[i];
  	}
  	cout<<e;

  }
 } 
   
}