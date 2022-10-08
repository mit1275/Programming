                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 bool comp(string a,string b)
 {
 	if(a.size()==b.size())
 	{
 		return (b>a);
 	}
 	else
 	{
 		return a.length()<b.length();
 	}
 }          
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
ll n;
cin>>n;
string a;
std::vector<string> v; 
for(ll i=0;i<n;i++)
{
	cin>>a;
	v.push_back(a);
}
sort(v.begin(),v.end(),comp);
for(ll i=0;i<n;i++)
{
	cout<<v[i]<<endl;
}
   
}