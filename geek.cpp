                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
 // #ifndef ONLINE_JUDGE
 // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
 // #endif
  boost
 ll t;
 cin>>t;
 while(t--)
 {
 	ll n,x=0;
 	cin>>n;
 	string a;
 	cin>>a;
 	string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba"; 
 		for(ll i=0;i<n/2;i++)
 		{
 			swap(a[x++],a[x++]);
 		}

 		 for (int i=0; i <n; i++) 
 		 {
        a[i] = reverseAlphabet[a[i] - 'a']; 
    }
    cout<<a<<endl;
  
 
 } 
   
}