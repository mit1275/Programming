                                     
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 // it("initializes with two contestants",function(){
 //        return Contest.deployed().then(function(instance){
 //            return instance.contestantsCount();
 //        }).then(function(count){
 //            assert.equal(count,2);
 //        });
 //    });           
 // Contest.deployed().then(function(instance){app=instance})
 ll power(ll a,ll b)
 {
     ll x=1;

     while(b)
     {
        if(b%2==0)
        {
            a=(a*a);
            b/=2;
        }
        else
        {
            x*=a;
            b-=1;
        }
     }
     return x;
 }
 void dfs(vector<ll>adj[],ll node,ll par)
 {
    for(ll child:adj[node])
    {
        if(child==par)
        {
            continue;
        }
        dfs(adj,child,node);
    }
 }
 void bfs(vector<ll>adj[],ll node)
 {
    queue<ll>q;
    q.push(node);
    // bool vis[]

    while(!q.empty())
    {
        ll b=q.size();
        while(b--)
        {
            ll child=q.front();
            q.pop();

            for(ll d:adj[child])
            {
                q.push(d);
            }
        }
    }
 }
 ll dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
 void kmp(string &txt,string &pat)
 {
    string a=pat+"$"+txt;
    ll n=a.size();
    ll lps[n];

    memset(lps,0,sizeof(lps));

    lps[0]=0;

    for(ll i=1;i<n;i++)
    {
        ll j=lps[i-1];
        while(j>0&&a[i]!=a[j])
        {
            j=lps[j-1];
        }
        if(a[i]==a[j])
        {
            j++;
        }
        lps[i]=j;
    }
    
 }
 ll get(vector<int>&a,ll k)
 {
    ll cnt=0,ans=0,res=0,x=1,start=0;
        ll n=a.size();
        
        for(int i=0;i<n;i++)
        {
            res+=(a[i]);
            x=(res)*(i-start+1);
            ll len=i-start+1;
            while(x>=k&&(start<i))
            {
                res-=a[start];
                len-=1;
                x=(res)*(len);
                // len
                start++;
                
            }
            if(x<k)
            {
                ans+=(i-start+1);
            }
        }
        return ans;
 }
 int main(){
  boost

  map<ll,ll>mp45;
  
  for(ll i=0;i<5;i++)
  {
  	mp45[i]++;
  }
  map<ll,ll>mp46;
  for(ll i=0;i<5;i++)
  {
  	mp46[i]++;
  }
  map<ll,ll>mp47;
  for(ll i=0;i<5;i++)
  {
  	mp47[i]++;
  }
  map<ll,ll>mp48;
  for(ll i=0;i<5;i++)
  {
  	mp48[i]++;
  }
  map<ll,ll>mp49;
  for(ll i=0;i<5;i++)
  {
  	mp49[i]++;
  }

  set<ll>s234;

  for(ll i=1;i<2;i++)
  {
  	s234.insert(i);
  }
  set<ll>s235;
  for(ll i=1;i<2;i++)
  {
  	s235.insert(i);
  }
  set<ll>s236;
  for(ll i=1;i<2;i++)
  {
  	s236.insert(i);
  }
   
}