                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 void reverse(ll a[],ll low,ll high)
 {
     while(low<high)
     {
     	swap(a[low],a[high]);
     	low++;
     	high--;
     }
 }
 void leftrotate(ll a[],ll n,ll d)
 {

 	reverse(a,0,d-1);
 	reverse(a,d,n-1);
 	reverse(a,0,n-1);
 }           
 int main(){
  boost
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
 ll n;
 cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 leftrotate(a,n,3);
  for(ll i=0;i<n;i++)
 {
 	cout<<a[i]<<" ";
 }
   
}