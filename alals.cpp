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
  ll n,k,flag=0,x=0,sum=0;
  cin>>n>>k;
  ll a[n],count[n];
  for(ll i=1;i<=n;i++)
  {
  	cin>>a[i];
  	count[a[i]]=i;
  }
 for(ll i=1;i<n-1;i++)
 {
 	if(a[i]==i)
 	{
 		continue;
 	}
 	else
 	{
 		// ll x=i;
 		ll y=count[i];
 		ll z=count[count[i]];
 		if(a[i]==a[count[count[i]]])
 		{
 			flag=1;
 			for(ll j=i+1;j<count[i];j++)
 			{
 				if(a[j]!=j)
 				{
 					z=j;
 					flag=0;
 					break;
 				}
 			}
 			if(flag==1)
 			{
 				for(ll k=y+1;k<=n;k++)
 				{
 					z=j;
 					flag=0;
 					break;
 				}
 			}
 			if(flag==0)
 			{
 				cout<<"-1"<<endl;
 				break;
 			}
 		}
 	}
 }
 } 
   
}