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
 ll a;
 cin>>a;
 ll l[a],r[a],sum=-1;
 for(ll i=0;i<a;i++)
 {
 	cin>>l[i];
 }
 for(ll i=0;i<a;i++)
 {
 	cin>>r[i];
 }
 int arr[1000]={0};
 for(ll i=0;i<a;i++)
 {
 	arr[l[i]]++;
 	arr[r[i]+1]--;
 	if(r[i]>sum)
 	{
 		sum=r[i];
 	}
 }
 ll minsum=arr[0],ind;
 for(ll i=1;i<sum+1;i++)
 {
   arr[i]+=arr[i-1];
   if(minsum<arr[i])
   {
   	minsum=arr[i];
   	ind=i;
   }
 }
 cout<<ind<<endl;

   
}