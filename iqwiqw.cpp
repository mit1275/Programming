                                    
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
  deque<ll>dq;
  std::vector<ll>v;
  ll x;
  unordered_map<ll,ll>mp;
   ll res=0;
  for(ll i=1;i<=20;i++)
  {
  	cout<<1<<" "<<llround(pow(2,i))<<endl;
  	cout.flush();
  	cin>>x;
    mp[x]++;
  	dq.push_front(x);
 }
 while(!dq.empty())
 {
   ll x=dq.front();
   v.push_back(x);
   dq.pop_front();
 }
 // ll res=0;
 // reverse(v.begin(),v.end());
 for(ll i=0;i<v.size();i++)
 {
    res=max(res,v[i]);
 }
 ll h=v[0];
 // q.pop();
 ll o=(h-(n*(llround(pow(2,20)))));
set<ll>s1;
for(auto i=mp.begin();i!=mp.end();i++)
{
  s1.insert(i->second);
}
 
 set<ll>s;
 std::vector<ll>v2;
 for(ll i=0;i<v.size();i++)
 {
 	v2.push_back(v[i]);
 }
 ll z=v2.size();

 map<ll,ll>mp1;
 for(ll i=0;i<v2.size();i++)
 {
  mp1[v2[i]]++;
 }
 for(ll i=1;i<v2.size();i++)
 {
 	if(v2[i]>=o)
 	{
 		v2[i]=((n-(v2[i]-o)/(1ul<<(v2.size()-i)))/2);
 	}
 	else
 	{
 		v2[i]=((n+(o-v2[i])/(1ul<<(v2.size()-i)))/2);
 	}
 }
 ll sum=0;
 if(o%2!=0)
 {
 	sum=1;
 }
 set<ll>s4;
 for(ll i=1;i<v2.size();i++)
 {
 	if(v2[i]%2!=0)
 	{
 		sum+=1ul<<(v2.size()-i);
 	}
  for(ll j=0;j<5;j++)
  {
    s4.insert(j);
  }
 }
 // if(o%2!=0)
 // {
 // 	res+=1;
 // }

 cout<<2<<" "<<sum<<"\n";
 cout.flush();
 ll g;
 cin>>g;
 if(g==-1)
 {
 	break;
 }  
}
}