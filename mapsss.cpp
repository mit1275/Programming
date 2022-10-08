                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 //usually implemented as binary tree or hashsets
 //colellection of stored objects that allow fast retrival using a key
 // 4 types of map containers 
 //map,unordred_map,multi-map,unordered multi-map
 //map prop-
 //orderd by key,no dulpicate elements,direct elemtn access using the key,similar to dictioonary,keys are unique
 ///multi-map
 //ordered by key,allows duplicte elements,all iterators possible
 //unordered-map
 //no dupictes ate allowed,no reverse iterators,elements are unordered
 //unordered multi  mp
 // duplicates are alllowed,unordered,no reverse iterators
int main()
{
  map<string,int>m1{
  {"ams",1},
     {"urur",2},
     {"erer",3},
     {"asya",78}
 };
 // for(auto i=m1.begin();i!=m1.end();i++)
 // {
 // 	cout<<i->first<<" "<<i->second<<endl;
 // }
// map<string,string>m2;
// string a,b;
// for(int i=0;i<4;i++)
// {
// 	cin>>a>>b;
// 	m2.insert(make_pair(a,b));
// }
// for(auto i=m2.begin();i!=m2.end();i++)
// {
// 	cout<<i->first<<endl;
// }
 // map<int,string>m3;
 // int a;
 // string b;
 // for(int i=0;i<3;i++)
 // {
 // 	cin>>a>>b;
 // 	m3.insert(make_pair(a,b));
 // }
 // for(auto i=m3.begin();i!=m3.end();i++)
 // {
 // 	cout<<i->first<<" "<<i->second<<endl;
 // }
map<string,set<int>>ge{
	{"aks",{1,2}},
	{"sdd",{34,23}}
};
for(auto i=ge.begin();i!=ge.end();i++)
{
	cout<<i->first;
	// for(auto )
}
ge["aks"].insert(2232);

}