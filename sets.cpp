//maps are used to replicate associative arrays
//key or index can be inserted,deleted but not altered
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<char>suits={'x','b','c'};
	for(auto it=suits.begin();it!=suits.end();it++)
	{
		cout<<*it<<endl;
	}
	
}