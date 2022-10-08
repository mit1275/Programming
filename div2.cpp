                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 vector<pair<ll,ll>>adj[200002];
 bool vis[200002];
 #define p pair<ll,pair<ll,ll>>
 struct cmp
 {
   bool operator()(const pair<ll,pair<ll,ll>>&a,const pair<ll,pair<ll,ll>>&b)
   {
     return (a.second.first>b.second.first);
   }
 };
 int main(){
  boost
  ll n,m;
  cin>>n>>m;
  memset(vis,false,sizeof(vis));
  for(ll i=1;i<=m;i++)
  {
    ll u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
  }

  priority_queue<p,vector<p>,cmp>pq;

  ll dp[n+1][2];
  
  for(ll i=0;i<=n;i++)
  {
    for(ll j=0;j<2;j++)
    {
      dp[i][j]=1e18;
    }
  }

  dp[1][0]=0;
  // dp[1][1]=0;

  pq.push({1,{0,0}});

  while(!pq.empty())
  {
      ll node=pq.top().first;
      ll val=pq.top().second.first;
      ll dis=pq.top().second.second;
      pq.pop();
      if(dp[node][dis]!=val)
      {
        continue;
      }
      if(node==n)
      {
        break;
      }
      for(auto it:adj[node])
      {
        ll child=it.first;
        ll w=it.second;
        if(dis==0)
        {
          if(val!=1e18)
          {
            ll wt=(val+(w/2));
            if(dp[child][1]>wt)
            {
              dp[child][1]=wt;
              pq.push({child,{dp[child][1],1}});
            }
          }
        }
        // else
        // {
          ll wt=(dp[node][dis]+(w));
          if(dp[child][dis]>wt)
          {
            dp[child][dis]=wt;
            pq.push({child,{dp[child][dis],dis}});
          }
        // }
      }
    }
  cout<<dp[n][1];
}