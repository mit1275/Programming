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
ll n,key,j;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
for(ll i=1;i<n;i++)
{
  key=a[i];
  j=i-1;
  
  while(j>=0&&a[j]>key)
  {
  	a[j+1]=a[j];
  	j--;
  }
  a[j+1]=key;
}
for(ll i=0;i<n;i++)
{
	cout<<a[i]<<endl;
}
   
}