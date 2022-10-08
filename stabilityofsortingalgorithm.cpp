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
 set<pair<int,string>>s1;
 int a;
 string b;
 for(int i=0;i<4;i++)
 {
 	cin>>a>>b;
 	s1.insert(make_pair(a,b));
 }
 for(auto i=s1.begin();i!=s1.end();i++)
 {
 	cout<<i->first<<" "<<i->second<<endl;
 }
  
   
}