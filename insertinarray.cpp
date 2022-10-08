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
ll n,x,element;
cin>>n;
cout<<"Enter at index to insert"<<endl;
cin>>x;
cout<<"Enter value of element"<<endl;
cin>>element;
ll a[n];
for(ll i=0;i<n-1;i++)
{
	cin>>a[i];
}
for(ll i=n-2;i>=x;i--)
{
  a[i+1]=a[i];
}
a[x]=element;
for(ll i=0;i<n;i++)
{
	cout<<a[i]<<endl;
}
   
}