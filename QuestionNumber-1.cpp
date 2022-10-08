                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
  boost
 ll n;
 cin>>n;

 ll a[n];

 ll s=0;
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 	s+=a[i];
 }
 // take sum of all elements

 ll x=(n*(n+1))/2;

// time complexity is O(n)
 cout<<x-s<<endl;

   
}