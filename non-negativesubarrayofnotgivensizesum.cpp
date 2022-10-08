                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
 {
   ll n,sum,sumi=0,start=0,flag=0;
   cin>>n>>sum;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   sumi=a[0];
   for(ll i=1;i<=n;i++)
   {
   	 while(sumi>sum&&start<i-1)
   	 {
       sumi=sumi-a[start];
       start++;
   	 }
   	 if(sum==sumi)
   	 {
   	 	flag=1;
   	 	cout<<"Found between"<<start<<" "<<i-1<<endl;
   	 	break;
   	 }
   	 if(i<n-1)
   	 {
   	 	sumi+=a[i];
   	 }
   }
   if(flag==0)
   {
   	cout<<"Not found"<<endl;
   }

 }