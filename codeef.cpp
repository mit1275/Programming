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
 	ll n,sum=0,count=0,x=0;
 	cin>>n;
 	if(n==2)
 	{
 		cout<<"NO"<<endl;
 	}
 	else
 	{
 		for(ll i=1;i<=n/2;i++)
 		{
          // cout<<2*i<<" ";
          sum+=2*i;
 		}
 		for(ll i=0;i<(n/2-1);i++)
 		{
 			// cout<<2*i+1<<" ";
 			count+=2*i+1;
 		}
 		if((sum-count)%2!=0)
 		{
 			cout<<"YES"<<endl;
 		for(ll i=1;i<=n/2;i++)
 		{
          cout<<2*i<<" ";
          // sum+=2*i;
 		}
 		for(ll i=0;i<(n/2-1);i++)
 		{
 			cout<<2*i+1<<" ";
 			// count+=2*i+1;
 		}
 		cout<<sum-count<<endl;
 		}
 		else
 			cout<<"NO"<<endl;

 	}
 } 
   
}