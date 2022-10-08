                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 class student
 {
 protected:
 	        int a,b;
 	    public:
 	    	  void getroll(int x,int y)
 	    	  {
 	    	  	a=x;
 	    	  	b=y;
 	    	  }
 };
 class name:public student
 {
 protected:
 	        string s1,s2;
 	    public:
 	    	   void getname(string v,string f)
 	    	   {
 	    	   	s1=v;
 	    	   	s2=f;
 	    	   }
 };
 class marks:public name
 {
 protected:
 	  int n,m;
 	public:
 		   void getmar(int yi,int oo)
 		   {
 		   	n=yi;
 		   	m=oo;
 		   }
 		   void putinfo()
 		   {
 		   	cout<<"Marks obtained by "<<a<<" Mr. "<<s1<<" is "<<n<<endl;
 		   		cout<<"Marks obtained by "<<b<<" Mr. "<<s2<<" is "<<m<<endl;
 		   }
 }  ;         
 int main()
{ 
   marks m1;
   m1.student::getroll(1,2);
   m1.name::getname("amit","amprr");
   m1.marks::getmar(99,12);
   m1.marks::putinfo();
}