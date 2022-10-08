                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
int main()
{
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
 ll n,low=0;
 cin>>n;
 ll pivot,high=n-1;
 cout<<"Enter index about which you want partition"<<endl;
 cin>>pivot;
 ll a[n],i=low-1;
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 swap(a[pivot],a[n-1]);
 for(ll j=low
 	;j<=n-1;j++)
 {
 	if(a[j]<a[pivot])
 	{
       i++;
       swap(a[i],a[j]);
 	}
 }
 swap(a[i+1],a[n-1]);
 for(ll i=0;i<n;i++)
 {
 	cout<<a[i]<<endl;
 }
}