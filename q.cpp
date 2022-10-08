                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 ll power(ll a,ll b)
 {
    ll x=1;
 
    while(b)
    {
        if(b%2==0)
        {
            a=(a*a);
            a%=MOD;
            b=b/2;
        }
        else
        {
            x=(x*a);
            x%=MOD;
            b=b-1;
        }
    }
    return (x);
 }
 ll bfs(ll i,ll j,ll n,ll m)
 {
    queue<pair<ll,ll>>q;
    q.push({i,j});
 
    bool vis[n+1][m+1];
    memset(vis,false,sizeof(vis));
 
    ll dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    ll ans=0;
    while(!q.empty())
    {
        ll b=q.size();
        ans++;
        while(b--)
        {
            ll i=q.front().first;
            ll j=q.front().second;
            q.pop();
            for(ll k=0;k<4;k++)
            {
                ll x=i+dir[k][0];
                ll y=j+dir[k][1];
 
                if(x>=0&&y>=0&&x<=n&&y<=m&&vis[x][y]==false)
                {
                    q.push({x,y});
                    vis[x][y]=true;
                }
            }
        }
    }
    return ans;
 }
 ll countdist(ll a[],ll n)
 {
    set<ll>s;
 
    for(ll i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    return s.size();
 }
 ll upper(ll a[],ll n,ll x)
 {
    ll low=0,high=n-1;
    ll res=-1;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        if(a[mid]>=x)
        {
            res=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return res;
 }
 ll lower(ll a[],ll n,ll x)
 {
    ll low=0,high=n-1;
    ll res=-1;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        if(a[mid]<=x)
        {
            res=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return res;
 }
 ll fact(ll n)
 {
    ll x=1;
 
    for(ll i=1;i<=n;i++)
    {
        x=(x*i);
        x%=MOD;
    }
    return x;
 }            
 int main(){
  boost

  ll b1[5];
 
  for(ll i=0;i<5;i++)
  {
    b1[i]=i;
  }
  set<ll>s34;
  for(ll i=0;i<5;i++)
  {
    ll x=lower(b1,5,b1[i]);
    s34.insert(x);
  }
 
  ll tr=countdist(b1,5);
 
  for(ll i=0;i<5;i++)
  {
    ll x=upper(b1,5,b1[i]);
    s34.insert(x);
  }
   
}