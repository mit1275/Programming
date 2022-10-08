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
 ll n,k;
 cin>>n>>k;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 ll left=0,right=n-1,flag=0;
 while(left<=right)
 {
 	if(a[left]+a[right]==k)
 	{
 		flag=1;
 		cout<<"Found at "<<left<<" "<<right<<endl;
 		break;
 	}
 	else if(a[left]+a[right]>k)
 	{
      right--;
 	}
 	else if(a[left]+a[right]<k)
 	{
 		left++;
 	}
 }
 if(flag==0)
 {
 	cout<<"Not Found"<<endl;
 }
   
}