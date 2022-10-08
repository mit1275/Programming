                                  
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int          
 int main(){
 ll t;
 cin>>t;
 while(t--)
 {
  ll n;
  cin>>n;
   map<ll,ll>mp;
  set<ll>s1;
  std::vector<ll> v;
  if(((n*(n+1))/2)%2!=0)
  {
    cout<<0<<"\n";
  }

  else
  {
   ll p=(n*(n+1))/2;
   ll v=((n*(n+1/4)));
  	ll count=0,y=0,r,glag=0;
  	ll z=((n*(n+1))/4);
  	// ll flag=0;
  	long double sr = sqrt(1+8*z); 
    if((sr - floor(sr)) == 0)
    {
      s1.insert(1);
      s1.insert(2);
      s1.insert(1);
    	glag=1;
    	r=(-1+floor(sr))/2;
    }
    ll res=0;
    // for(ll i=0;i<mp)
  	if(glag==0)
  	{
      s1.insert(2);
      s1.insert(1);
  	   ll e=(-1+sqrt(1+8*z));
  	   e=(e/2);
  	   cout<<(n-e)<<"\n";
       // for
    }
  else 
  {
  	ll g=(n-r);
    cout<<(((r*(r-1)))/2)+(((g*(g-1)))/2)+(n-r)<<"\n";
  }

  }
 } 
   
}