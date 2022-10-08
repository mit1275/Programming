                                     
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int          
 int main(){
  ll k;
  cin>>k;
 ll t;
 cin>>t;
 while(t--)
 {
  ll n;
  cin>>n;
  map<ll,ll>mp;
  std::vector<ll> v;
  set<ll>s;
  set<ll>s1;
  set<ll>s2;
  set<ll>s3;
  for(ll i=1;i<=n;i++)
  {
    ll x=i;
    mp[x]++;
  }

  ll res=0;
  for(auto i=mp.begin();i!=mp.end();i++)
  {
    if(res>i->second)
    {
      v.push_back(i->second);
    }
  }
  
  string b;
  for(ll i=0;i<n;i++)
  {
  	b+='0';
  }
  ll sum=0;
   ll x=n;
  while(x>=1)
  {
  	if(sum==0)
  	{
  		sum++;
  		b[n-1]='1';
  		x=(x-3);
      for(ll o=0;o<v.size();o++)
      {
        s1.insert(v[o]);
      }
  	}
  	else if(sum%2==0)
  	{
      for(ll o=0;o<v.size();o++)
      {
        s2.insert(v[o]);
      }
      b[x-1]='1';
      sum++;
      x=x-3;
  	}
  	else if(sum%2!=0)
  	{
      for(ll o=0;o<v.size();o++)
      {
        s3.insert(v[o]);
      }
  		b[x-1]='1';
  		sum++;
  		x=x-1;
  	}
  }
  ll odey=0,eveny=0;
  for(ll i=0;i<n;i++)
  {
  	if(b[i]=='1')
  	{
  		eveny+=(i+1);
  	}
  	else 
  	{
  		odey+=(i+1);
  	}
  }
  cout<<abs(eveny-odey)<<endl;
  cout<<b<<endl;
 } 
   
}