                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
{
   ll n,k,flag=0;
   cin>>n>>k;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   for(ll i=0;i<n;i++)
   {
   	if(a[i]==k)
   	{
   		flag=1;
   		cout<<"Found at"<<" "<<i<<" "<<"index"<<endl;
   		break;
   	}
   }
   if (flag==0)
   {
   	cout<<"Not present"<<endl;
   }
}