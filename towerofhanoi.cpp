                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 void TOH(ll n,char a,char b,char c)
 {
 	if(n==1)
 	{
 		cout<<"Move 1 from "<<a<<" to "<<c<<endl;
 		return ;
 	}
 	TOH(n-1,a,c,b);
 	cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
 	TOH(n-1,b,a,c);

 }           
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
ll n;
cin>>n;
char a,b,c;
cin>>a>>b>>c;
TOH(n,a,b,c);
   
}