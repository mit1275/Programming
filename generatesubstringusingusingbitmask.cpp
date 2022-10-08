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
string a;
cin>>a;
ll x=pow(2,a.size());
for(ll i=0;i<x;i++)
{
	for(ll j=0;j<a.size();j++)
	{
		if((i&(1<<j)))
		{
			cout<<a[j];
		}
	}
	cout<<endl;
} 
   
}