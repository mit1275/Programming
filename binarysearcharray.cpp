                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
{
 ll n,k;
 cin>>n>>k;
 ll a[n],low=0,high=n-1,mid,flag=0;
 mid=low+(high-low)/2;
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
  if(a[mid]==k)
  {
  	flag=1;
  	cout<<"Found at "<<mid<<endl;
  	break;
  }
  else if(a[mid]>k)
  {
  	high=mid-1;
  }
  else
  	 low=mid+1;
 }
 if(flag==0)
 {
 	cout<<"Not Found"<<endl;
 }
   
}