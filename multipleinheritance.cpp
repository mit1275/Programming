                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 class sdsl
 {
 protected:
 	       int a,b;
 	   public:
 	   	    void getdata(int x,int y)
 	   	    {
 	   	    	a=x;
 	   	    	b=y;
 	   	    }

 };
 class anbbs
 {
 protected:
 	         int c,d;
 	     public:
 	     	 void fd(int f,int fdf)
 	     	 {
 	     	 	c=f;
 	     	 	d=fdf;
 	     	 }
 };
 class errer:public sdsl,public anbbs
 {
 	// protected :
 	//   int x;
 	public:
 		void putdata()
 		{
 			cout<<a+b+c+d<<endl;
 		}
 };           
 int main()
{
   errer a1;
   a1.sdsl::getdata(1,2);
   a1.anbbs::fd(3,4);
   a1.putdata();
}