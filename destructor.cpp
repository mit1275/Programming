#include<bits/stdc++.h>
using namespace std;
class complex
{
	float floa,real;
	complex()
	{
		floa=0;
		real=0;
	}
	complex(float a,float b)
	{
		flao=a;
		real=b;
	}
	void di()
	{
		cout<<real<<"+"<<flao<<endl;
	}
	complex operator+(complex);
};
complex complex::operator+(complex a1)
{
   a1.real=real+complex.real;
   a1.floa=flao+complex.floa;
}
int main()
{
	
}