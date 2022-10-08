                                     /*Knowing is not enough,we must apply!!*/
//using prefix sum technique
//we can pair two pairs in a tuple
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
 {
  tuple<string,int,int>p1;
  string n;
  int a,b;
  cin>>n;
  cin>>a>>b;
  p1=make_tuple(n,a,b);
  cout<<get<0>(p1);
  cout<<get<1>(p1);
  cout<<get<2>(p1);
 }