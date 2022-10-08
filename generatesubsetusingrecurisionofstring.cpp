                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
void printsub(string a,ll index=0,string b="")
 {
 	if(index==a.size())
 	{
 		cout<<b<<endl;
 		return;
 	}
 	printsub(a,index+1,b);
 	printsub(a,index+1,b+a[index]);
 }           
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
string a,b="";
cin>>a;
ll n=a.size(),index=0;
printsub(a); 
   
}