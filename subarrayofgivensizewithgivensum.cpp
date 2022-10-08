                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
 {
 	ll n,sumi,sum=0;
 	cin>>n;
 	ll k;
 	cin>>k>>sumi;
 	ll a[n],flag=0;
 	for(ll i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
 	for(ll i=0;i<k;i++)
 	{
 		sum+=a[i];
 	}
 	if(sum==sumi)
 	{
 		cout<<"YES"<<endl;
 	}
 	else
 	{
 		for(ll i=k;i<n;i++)
 		{
 			sum+=a[i]-a[i-k];
 			if(sum==sumi)
 			{
 				flag=1;
 				cout<<"YES"<<endl;
 				break;
 			}
 		}
 		if(flag==0)
 		{
 			cout<<"NO"<<endl;
 		}
 	}
}