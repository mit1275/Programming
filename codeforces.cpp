//list class supports biderectional,linear list
//vector supports random access but list supports sequential only
// list can be accessed from front to back or back to front
#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<string>l1;
	
	for(int i=0;i<4;i++)
	{
		string a;
		cin>>a;
		l1.push_back(a);
	}

	// l1.push_back("yuyuyy");
l1.sort();
// l1.remove("amit");
list<string>::iterator p=l1.begin();

    while(p!=l1.end())
    {
    	cout<<*p<<endl;
    	p++;
    }
    cout<<l1.size();
    // sort(l1.begin(),l1.end());
	
}