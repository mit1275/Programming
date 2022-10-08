                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
  boost
ll n;
cin>>n;
ll a[n],d[n]={0},count=0,res=0,x=0;
for(ll i=0;i<n;i++)
{
	cin>>a[i];
} 
for(ll i=0;i<n;i++)
{

	if(a[i]==0)
	{
		x=0;
	}
	else
	{
		x++;
		res=max(res,x);	
	}
}
cout<<res<<endl;   
}