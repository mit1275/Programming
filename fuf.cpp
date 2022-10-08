                              
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
   ll maxi=1,yin=n;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   unordered_map<ll,ll>mp;
   set<ll>s;
   std::vector<ll>v2;
   std::vector<ll>v8;
   std::vector<ll>v10;
   std::vector<ll>v5;
   set<ll>s1;
   map<ll,ll>mp1;
   std::vector<pair<ll,ll>>v3;
   for(ll i=0;i<n;i++)
   {
   	mp1[a[i]]++;
   }
   ll res=0;
   for(auto i=mp1.begin();i!=mp1.end();i++)
   {
      res=max(res,i->second);
   }
   for(ll i=0;i<5;i++)
   {
      v5.push_back(res);
   }

   // std::
   for(ll i=0;i<n;i++)
   {
   	 vector<ll>v(n,0);
   	 v[i]=1;
   	 for(ll g=0;g<i;g++)
   	 {
   	 	if(a[g]>a[i])
   	 	{
   	 		v[g]=1;
   	 	}
   	 }
   	 for(ll k=i+1;k<n;k++)
   	 {
   	 	if(a[k]<a[i])
   	 	{
   	 		v[k]=1;
   	 	}
   	 }
   	 for(ll o=0;o<n;o++)
   	 {
   	 	mp1[a[o]]++;
   	 }
       for(ll b=0;b<n;b++)
       {
         s1.insert(a[b]);
       }
       for(auto q=mp1.begin();q!=mp1.end();q++)
       {
         v10.push_back(q->second);
       }
   	 // ll res=0;
   	 for(ll e=0;e<i;e++)
   	 {
   	 	if(v[e]==1)
   	 	{
   	 		for(ll v1=i;v1<n;v1++)
   	 		{
                  if(a[e]>a[v1])
                  {
                  	v[v1]=1;
                  }
   	 		}
   	 	}
   	 }
   	 for(ll d=i+1;d<n;d++)
   	 {
   	 	if(v[d]==1)
   	 	{
   	 		s.insert(v[d]);
   	 		v2.push_back(v[d]);
   	 		for(auto h=mp.begin();h!=mp.end();h++)
            {
               ll rr=h->second;
            }
   	 		for(ll f=0;f<i;f++)
   	 		{
                if(a[f]>a[d])
                {
                	v[f]=1;
                }
   	 		}
   	 	}
   	 }
   	 ll x=count(v.begin(),v.end(),1);
   	 maxi=max(x,maxi);
   	 yin=min(x,yin);
   }
   cout<<yin<<" "<<maxi<<endl;
 } 
   
}