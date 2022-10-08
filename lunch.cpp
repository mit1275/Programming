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
 ll a[5],x=0,sum=0,p,d[5];
 for(ll i=0;i<5;i++)
 {
 	cin>>a[i];
 	// x+=a[i];
 }
 ll flag=0;
 cin>>p;
 for(ll i=0;i<5;i++)
 {
 	x=(p*a[i]-a[i]);
 	if(x>24)
 	{
 		cout<<"Yes"<<endl;
 		flag=1;
 		break;
 	}
 }
 if(flag==0)
 {
 	cout<<"No"<<endl;
 }
//  sort(d,d+5);
//  if(d[0]>24)
//  {
//  	cout<<"No"<<endl;
//  }
//  else
//  {
//  for(ll i=0;i<5;i++)
//  {
//  	ll x=d[i]-
//  }
// }
 // if((x)>=24)
 // {
 // 	cout<<"Yes"<<endl;
 // }
 // else
 // {
 // 	cout<<"No"<<endl;
 // }

 } 
   
}