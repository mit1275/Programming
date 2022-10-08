                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);         
int main()
{ 
   ll n,x;
   cin>>n>>x;
   ll a[n],flag=0,mid,low,high;
   for(ll i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   mid=(n-1)/2;
   low=0;
   high=n-1;
   while(low<=high)
   {
   	mid=low+(high-low)/2;

   	if(a[mid]==x&&(mid==0||a[mid-1]!=x))
   	{
   		flag=1;
   		cout<<"Found at "<<mid<<endl;
   		break;
   	}
   	else if(a[mid]>=x)
   	{
   		high=mid-1;
   	}
   	else
   	{
     low=mid+1;
   	}
   }
   if(flag==0)
   {
   	cout<<"Not Found"<<endl;
   }
}