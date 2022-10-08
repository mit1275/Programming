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
ll count[26]={0};
for(ll i=0;i<a.size();i++)
{
	// ll x=a[i]-'a';
	count[a[i]-'a']++;
}
for(ll i=0;i<a.size();i++)
{
	if(count[a[i]-'a']>1)
	{
		cout<<a[i]<<endl;
		// 
		break;
	}
} 
   
}