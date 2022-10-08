                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
 ll t;
 cin>>t;
 while(t--)
 {
  ll n,k;
  cin>>n>>k;
   if(k>=n)
  {
  	cout<<"1"<<"\n";
  }
  else
  {
  	 ll res=-1;
  	for(ll i=1;i<=sqrt(n);i++)
  	{
  		if(n%i==0)
  		{
  			if(n/i==i)
  			{
  				if(i<=k)
  				{
		          res=max(res,i);
  				}
  			}
  			else
  			{
  			if((n/i)<=k)
		            		res=max(res, (n/i));
		            	if(i<=k)
		            		res=max(res, i);
		            }
  		}
  		// else
  		// {
  			
  		// }
  	}
  	cout<<n/res<<"\n";
  }
 } 
   
}