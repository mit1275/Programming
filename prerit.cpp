#include <bits/stdc++.h>		
using namespace std;

using ll = long long ;
using ull = unsigned long long ;
ll mod = 1000000007;

#define             test                        int t;cin>>t;while(t--)
#define         arrayscan(a,n)              for(ll i=0;i<n;cin>>a[i++])
#define          forr(i,a,b)                        for(ll i=a;i<b;++i)
#define          rforr(i,a,b)                    for(ll i=b-1;i>=a;i--)
#define          forrr(it,a)    for(auto it=a.begin();it!=a.end();it++)
#define            zero(a)                    memset((a), 0, sizeof(a))      
#define          fill(a, v)      fill_n(a, sizeof(a) / sizeof(a[0]), v)
#define          copy(a, b)      copy_n(a, sizeof(a) / sizeof(a[0]), b)
#define            bp(x)                          __builtin_popcount(x)
#define            all(c)                         (c).begin(),(c).end()
#define            endl                                            "\n"
#define             f                                             first
#define             s                                            second
#define           VAR_BOOL                    bool flag=0,glab=0,glag=0
#define          VAR_RESULT                   ll count=0,sum=0,result=0 
#define             pb                                        push_back
#define             mp                                        make_pair
#define             pf                                       push_front
#define            popb                                        pop_back
#define            popf                                       pop_front
#define             gt                                       goto start
#define           filei                 freopen("input.txt", "r", stdin)
#define           fileo                 freopen("output.txt","w",stdout)

#define fill2(a, v)     fill_n(&a[0][0], sizeof(a) / sizeof(a[0][0]), v)
#define copy2(a, b) copy_n(&a[0][0], sizeof(a) / sizeof(a[0][0]), &b[0][0])
#define VAR_CHAR           string s;string g;string h;string s1;string s2
#define VAR_INT ll mini=mod;ll maxi=-1;ll x=0,y=0,z=0,n=0,m=0,p=0,q=0,k=0    
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)                            

ll goto_varible=0;

class Debug {
  public :
  		void debug(ll x){
  		  cout<<x<<endl;
  		}
  		void debug(char x){
  		  cout<<x<<endl;
  		}
  		void debug(ll a[],ll n){
  		  forr(i,0,n)cout<<a[i]<<" ";
  		  cout<<endl;
  		}
  		void debug(vector<ll> a,ll n){
  			forr(i,0,n)cout<<a[i]<<" ";
  			cout<<endl;
  		}
      void debug(deque<ll> a,ll n){
        forr(i,0,n)cout<<a[i]<<" ";
        cout<<endl;
      }
  		void debug(map<ll,ll> a){
  			forrr(it,a)cout<<it->f<<" "<<it->s<<endl;
  		}
  		void debug(set<ll> s){
  			forrr(it,s)cout<<*it<<" ";
  			cout<<endl;
  		}
};

ll power(ll x,ll y, ll p)  
{  
    ll res = 1;   
    x = x % p; 
    if (x == 0) return 0; 
    while (y > 0){  
        if (y & 1)  
            res = (res*x) % p; 
        y = y>>1;  
        x = (x*x) % p;  
    }  
    return res;  
}

long long modInverse(long long n, ll p) 
{ 
    return power(n, p - 2, p); 
} 

long long nCrModPFermat(long long n, ll r, ll p) 
{ 
    if (r == 0) 
        return 1; 
    long long fac[n + 1]; 
    fac[0] = 1; 
    for (ll i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
}  


bool sortinrev( const pair<int,int> &a, const pair<int,int> &b ) 
{ 
    return ( a.first > b.first ) ; 
} 

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return ( a.second < b.second ) ; 
} 

bool checkexit(vector<pair<ll,ll>> v){
	forr(i,0,v.size()){
		if(v[i].f==1)return true;
	}
	return false;
}

ll output_nCr(vector<pair<ll,ll>> v, map<ll,ll> mpp){
	ll ans=1;
  if(v[0].f==1){
    ll output=0;
    forr(j,1,v[0].f+1){
      output = ((output%mod)+(nCrModPFermat(mpp[v[0].s],j,mod)%mod)%mod);
    }
    ans = output;
  }

  forr(i,1,v.size()){
    if(v[i].f==0)break;
    ll output=0;
    forr(j,0,v[i].f+1){
      output = ((output%mod)+(nCrModPFermat(mpp[v[i].s],j,mod)%mod)%mod);
      //cout<<mpp[v[i].s]<<" a "<<j<<" "<<endl;
    }
    ans =((ans%mod) *(output%mod)%mod);
  }

  

  // cout<<ans<<" a "<<endl<<endl;
  return ans%mod;
}

int main()
{
    Debug D;
       
                    fastIO;

       //*****DANGER*****//
        //*********//
              #ifndef ONLINE_JUDGE    
                 filei;fileo; 
                    #endif
        //**********//
        
     test
     {
              ll n;
              cin>>n;
              map<ll,ll> mpp;
              forr(i,0,n){
                ll x;cin>>x;
                mpp[x]++;
              }
              vector<pair<ll,ll>> vect;
              forrr(it,mpp){
                vect.pb(mp(it->s,it->f));
              }

              sort(vect.begin(), vect.end() , sortinrev ); 
              bool flag=true;
              ll array[n+1]={};
              while(flag){
                ll cnt=1,k=vect[0].f;
                forr(j,1,vect.size()){
                  if(vect[j].f==vect[j-1].f){
                    cnt++;
                  }
                  else break;
                }
                sort(vect.begin(), vect.begin()+cnt , sortbysec); 
                forr(j,1,vect.size()){
                  if(vect[j].f>vect[j-1].f){
                    k=vect[j].f;
                    break;
                  }
                  else break;
                }
                cnt=1;
                forr(j,1,vect.size()){
                  if(vect[j].f==k){
                    cnt++;
                  }
                  else break;
                }
                sort(vect.begin(),vect.begin()+cnt,sortinrev);
                // forr(i,0,vect.size()){
                //  cout<<vect[i].f<<" "<<vect[i].s<<endl;
                // }
                // cout<<endl;
                array[vect[0].s] = (array[vect[0].s]%mod + output_nCr(vect,mpp)%mod)%mod; 
                if(vect[0].f>=1)
                vect[0].f--;
                else {
                  auto it = vect.begin(); 
            vect.erase(it);
                }
                flag=checkexit(vect);
              }
              forr(i,1,n+1){
                cout<<array[i]<<" ";
              }
              cout<<endl;

              gt;
              start:
              goto_varible=0;
     } 

     return 0;  

}
	// cout<<endl<<v[0].s<<endl;