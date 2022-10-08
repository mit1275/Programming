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
  ll n=a.size();
  cout<<3<<endl;
  cout<<"L"<<" "<<2<<endl;
  ll x=n;
  x++;
  cout<<"R"<<" "<<2<<endl;
  x+=(x-2);
  cout<<"R"<<" "<<x-1<<endl;
 } 
   