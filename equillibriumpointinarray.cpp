                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
 ll n,lsum=0,flag=0,sum=0;
 cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 	sum+=a[i];
 }
for(ll i=0;i<n;i++)
{
	if(lsum==sum-a[i])
	{
		flag=1;
		cout<<"Found"<<endl;
		break;
	}
	else
	{
		lsum+=a[i];
		sum=sum-a[i];
	}
}
if(flag==0)
{
	cout<<"No"<<endl;
}
   
}