                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
 // #ifndef ONLINE_JUDGE
 // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
 // #endif
  boost
 ll n,x,sum=0,flag=0;
 cin>>n>>x;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 } 
 sort(a,a+n);
 for(ll i=0;i<n-2;i++)
 {
 	ll left=i+1;
 	ll right =n-1;
 	while(left<right)
 	{
 		if(a[i]+a[left]+a[right]==x)
 		{
 			flag=1;
 			cout<<"Found "<<a[i]<<" "<<a[left]<<" "<<a[right]<<endl;
 			break;
 		}
 		else if(a[i]+a[left]+a[right]>x)
 		{
 			right--;
 		}
 		else
 		{
 			left++;
 		}
 	}
 }
 if(flag==0)
 {
 	cout<<"Not present"<<endl;
 }  
}