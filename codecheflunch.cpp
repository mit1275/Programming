#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
void func();
int main() {
	int t;
	scanf("%d", &t);
	while(t > 0) 
	{
		func();
		t--;
	}
	return 0;
}
void func()
{
	vector <long long int> a, b;
	long long int n, k, p;
	scanf("%lld %lld", &n, &k);
	for(long long int i = 0; i < n; i++)
	{
		scanf("%lld", &p);
		a.push_back(p);
		b.push_back(p);
	}
	bool x = true;
	if(k == 1)
		x = true;
	else
		{
			sort(b.begin(), b.end());
			for(long long int i = 0; i < a.size(); i++)
			{
				vector<long long int>::iterator it = find(a.begin(), a.end(), b[i]); 
				// cout<<*it<<endl;
				long long int j = it - a.begin();
				cout<<j<<endl;
				j = abs(j - i) % k;
				if(j != 0)
				{
					x = false;
					break;
				}
			}
		}
		if(x == true)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
}