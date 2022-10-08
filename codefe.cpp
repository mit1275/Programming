                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
#include<deque>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
             
 int main()
 {
  deque<int>d1;
  int x;
  for(int i=0;i<4;i++)
  {
  	cin>>x;
  	d1.push_back(x);
  }
  for(auto i=d1.begin();i!=d1.end();i++)
  {
  	cout<<*i<<endl;
  } 
}