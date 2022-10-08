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
 ll t;
 cin>>t;
 while(t--)
 {
   ll a,b;
   cin>>a>>b;
   if(a>b&&(a-b)%2==0)
   {
   	cout<<"1"<<endl;
   }
   else if(b>a&&(a-b)%2==0)
   {
   	cout<<"2"<<endl;
   }
   else if(b==a)
   {
   	cout<<"0"<<endl;
   }
   else if((a>b)&&(a-b)%2!=0)
   {
     cout<<"2"<<endl;
   }
   else if(b>a&&(a-b)%2!=0)
   {
   	cout<<"1"<<endl;
   }
 } 
   
}