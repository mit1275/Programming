                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 //no concept of push_back and front in sets
 //no direct access is allowed in sets
 //if element is already present in the set it does not insert that element again in it
 //uses operator < for ordering
 //s.erase
 //sets donot have duplicates
 //multi-sets allow duplicates,sorted by key,all iterators are avialiable
 //in unordered set elements are unsorted,duplicates not allowed,elements cannont be modified
int main()
{
   set<int>s1;
   // s1={1,1,2,34,2,3,3,5};
   // for(auto i=s1.begin();i!=s1.end();i++)
   // {
   // 	cout<<*i<<endl;
   // }
   set<string>s;
   s={"amit","xyz","bcd","amit","bcd","zxzx"};
    s.insert("dfd");
   for(auto i=s.begin();i!=s.end();i++)
   {
   	cout<<*i<<endl;
   }
   if(s.count("amit"))
   {
   	cout<<"yas"<<endl;
   }
   else
   	  cout<<"gj";
   auto x=s.find("bcd");
  if(x!=s.end())
  {
  	cout<<"Found "<<*x<<endl;
  }
  s.clear();
}