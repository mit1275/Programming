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
 ll flag=0,glag=0;
 
 for(ll i=0;i<a.size();i++)
 {
 	if(a[i]=='A'&&a[i+1]=='B')
 	{
 		for(ll j=i+2;j<a.size();j++)
 		{
          if(a[j]=='B'&&a[j+1]=='A')
          {
          	cout<<"YES";
          	flag=1;
          	break;
          }
 		}
 	}
 	if(flag==1)
 	{
 		break;
 	}
 }

 if(flag==0)
 {
 	for(ll i=0;i<a.size();i++)
 	{
 	 if(a[i]=='B'&&a[i+1]=='A')
 	{
 		for(ll j=i+2;j<a.size();j++)
 		{
          if(a[j]=='A'&&a[j+1]=='B')
          {
          	cout<<"YES";
          	glag=1;
          	break;
          }
 		}
 	}
 	if(glag==1)
 	{
 		break;
 	}
 	}
 }
 if(flag==0&&glag==0)
 {
 	cout<<"NO";
 }
   
}