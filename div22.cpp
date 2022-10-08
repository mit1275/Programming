                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL); 
        
 int main(){
  ll a24[5];
  for(ll i=0;i<5;i++)
  {
    a24[i]=i;
  }
  std::vector<pair<ll,ll>>v34;
  for(ll i=0;i<5;i++)
  {
    v34.push_back(make_pair(i,a24[i]));
  }
  map<ll,ll>mp52;
  for(ll i=0;i<5;i++)
  {
    mp52[a24[i]]++;
  }
  ll x345=mp52.size();
  std::vector<pair<ll,ll>>v45;
   for(auto i=mp52.begin();i!=mp52.end();i++)
   {
    v45.push_back(make_pair(i->second,i->first));
   }
   set<ll>s12;
   for(ll i=0;i<v45.size();i++)
   {
    s12.insert(v45[i].second);
   }
   ll y34=s12.size();
   std::vector<ll> v66;
   for(auto i=s12.begin();i!=s12.end();i++)
   {
     v66.push_back(*i);
   }
   ll dsda=v66.size();

}