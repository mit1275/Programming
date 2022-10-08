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
 ll n;
 cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 ll x;
 cin>>x;
 ll low=0,high=n-1,mid;
 while(low<=high)
 {
 	mid=low+(high-low)/2;
 	if(a[mid]==x&&(mid==n-1||a[mid+1]!=x))
 	{
 		cout<<mid<<endl;
 		break;
 	}
 	else if(a[mid]>x)
 	{
 		high=mid-1;
 	}
 	else
 		 low=mid+1;
 }
   
}