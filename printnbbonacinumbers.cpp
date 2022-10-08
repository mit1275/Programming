                                     /*Knowing is not enough,we must apply!!*/
// n binocii number with size m
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
 {
   ll n,m,sum=0;
   cin>>n>>m;
   ll a[m]={0};

   a[n-1]=1;
   a[n]=1;
   for(ll i=n+1;i<m;i++)
   {
   	a[i]=2*a[i-1]-a[n-i-1];
   }
   for(ll i=0;i<m;i++)
   {
   	cout<<a[i]<<" ";
   }
  
 }