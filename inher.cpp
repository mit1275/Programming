                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 class x
 {
 protected:
 	int a;
 public:
 	   x(int f)
 	   {
 	   	a=f;
 	   }
 };
 class y:public x
 {
 	int b,c;
 public:
 	    void get(int g)
 	    {
 	    	b=g;
 	    	// c=getdata();
 	    }
 	    void add()
 	    {
 	    	cout<<a+b<<endl;
 	    }
 };           
 int main()
 {
 	y a1;
 	x a2(2);
 	// a1.x(2);
 	a1.y::get(3);
 	a1.y::add();
}