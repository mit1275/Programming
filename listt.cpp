                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
// #include<deque>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
//biderectional
//direct access element is not allowed
//forward list is unidirectional(singley-linked)
//can insert and delelte in rapid
//size method not availablle in forward list
//no back method for forward list             
int main()
{
  list<string>l1;
  string a;
  for(int i=0;i<4;i++)
  {
  	cin>>a;
  	l1.push_back(a);
  }
   l1.sort();
  auto it=find(l1.begin(),l1.end(),"amit");
  if(it!=l1.end())
  {
  	l1.insert(it,"hfhf");
  }
  for(auto i=l1.begin();i!=l1.end();i++)
  {
  	cout<<*i<<endl;
  }
}