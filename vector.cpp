                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 // class Person
 // {
 // 	string name;
 // 	int age;
 // public:
 // 	  Person()
 // 	  {
 	  	
 // 	  }
 // }
 int gf(int x,int y){return (x*y);}           
int main()
{
	vector<int>v3;
	vector<int>v1={1,2,3,4};
	vector<int>v2={10,20};
	auto x=find(v1.begin(),v1.end(),3);
	v1.insert(x,10);
     cout<<v1.max_size()<<endl;
	// for(auto i=v1.begin();i!=v1.end();i++)
	// {
	// 	cout<<*i<<endl;
	// }
 //    reverse(v1.begin(),v1.end());

 //    for(auto j=v1.begin();j!=v1.end();j++)
 //    {
 //    	cout<<*j<<endl;

 //    }
    // v1.erase(v1.begin(),v1.begin()+2);
    // for(auto j=v1.begin();j!=v1.end();j++)
    // {
    // 	cout<<*j<<endl;

    // }
    // copy(v1.begin(),v1.end(),back_inserter(v2));
    // for(auto i=v2.begin();i!=v2.end();i++)
    // {
    // 	cout<<*i<<endl;
    // }
    transform(v2.begin(),v2.end(),v1.begin(),back_inserter(v3),gf);
    for(auto i=v3.begin();i!=v3.end();i++)
    {
    	cout<<*i<<endl;
    }
    	

}