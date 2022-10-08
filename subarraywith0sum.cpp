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
 ll n,x=0;
 cin>>n;
 ll a[n],sum;
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 } 
 // cin>>sum;
 unordered_set<ll>s;
 for(ll i=0;i<n;i++)
 {
   x+=a[i];
   if(s.find(x)!=s.end())
   {
   	cout<<"Found "<<endl;
   	break;
   }
   else if(x==0)
   {
   	cout<<"Found "<<endl;
   	break;
   }
   s.insert(x);
 }
   
}