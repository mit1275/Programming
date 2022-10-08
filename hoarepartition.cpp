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
 boost
 ll n,pivot;
 cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 cout<<"Enter point about partiotion "<<endl;
 cin>>pivot;
 ll low=0,high=n;
 ll i=low-1,j=n;
 while(1)
 {
 	do{
 		i++;
 	}while(a[i]<pivot);
 	do
 	{
 		j--;
 	}while(a[j]>pivot);
 	if(i>=j)
 	{
 		cout<<j<<endl;
 		break;
 	}
 	swap(a[i],a[j]);
 }
 for(ll i=0;i<n;i++)
 {
 	cout<<a[i]<<endl;
 }
}