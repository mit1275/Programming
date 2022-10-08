                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
  boost

  ll n,target;
  cin>>n>>target;

  ll a[n];

  for(ll i=0;i<n;i++)
  {
  	cin>>a[i];
  }
     ll ans=1e7;
        
        sort(a,a+n);

        // sort the array
        
        for(ll i=0;i<n-2;i++)
        {
            ll l=i+1;
            ll r=n-1;
            
            while(l<r)
            {
                ll x=a[i]+a[l]+a[r];
                if(x==target)
                {
                    return x;
                }
                if(abs(x-target)<abs(ans-target))
                {
                    ans=x;
                }
                if(x>target)
                {
                    r--;
                }
                else if(x<target)
                {
                    l++;
                }
                
            }
        }
        cout<<ans;

        // expected time complexity is O(n*n)
   
}