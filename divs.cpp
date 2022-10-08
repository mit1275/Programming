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
  long double a,b,c;
		cin>>a>>b>>c;
		double x=(a+b)/2;
		if(c<=x)
			{cout<<2<<endl;
			}
		else{
			ll n= (a-b)/(2*(c-x));
			if(abs(x+(a-b)/(2*n)-c)>abs(x+(a-b)/(2*(n+1))-c))cout<<n+1<<endl;
			else cout<<n<<endl;
 } 
   
}
}