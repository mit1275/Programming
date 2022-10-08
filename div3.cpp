    set<ll>s212;
 ll a909[2];
 for(ll i=0;i<2;i++)
 {
 	a909[i]=i;
 	s212.insert(i);
 }
 map<ll,ll>mp43;

 for(auto i=s212.begin();i!=s212.end();i++)
 {
 	mp43[*i]++;
 }
 13
1000998001

vector<pair<ll,ll>>v99;

 map<ll,ll>mp54;
for(auto i=mp43.begin();i!=mp43.end();i++)
 {
 	mp54[i->first]++;
 }
 for(auto i=mp43.begin();i!=mp43.end();i++)
 {
 	mp54[i->first]++;
 }
 for(auto i=mp54.begin();i!=mp54.end();i++)
 {
 	v99.push_back({i->first,i->second});
 }
 for(auto i=mp54.begin();i!=mp54.end();i++)
 {
 	v99.push_back({i->second,i->first});
 }
 ll x122=mp54.size();
 ll yeryu=mp43.size();
 ll uiuie89i=v99.size();