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
 ll n;
 cin>>n;
 string a;
 cin>>a;
 ll x=0,sum=0,count=0;
 for(ll i=0;i<n;i++)
 {
 	if((a[i]-'0')%2==0)
 	{
 		sum+=(i+1);
 	}
 }
 cout<<sum; 
   
}