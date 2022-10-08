                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 class Ibutton
 {
 	
 public:
 	  virtual void createbutton()=0;
 	  virtual void show()=0;
 };
 class Mac:public Ibutton
 {
 public:
 	    void createbutton()
 	    {
 	    	cout<<"Mac buier"<<endl;
 	    }
 	    void show()
 	    {
 	    	cout<<"Mac"<<endl;
 	    }

 };
 class Window:public Ibutton
 {
 public:
 	    void createbutton()
 	    {
 	    	cout<<"Window buier"<<endl;
 	    }
 	    void show()
 	    {
 	    	cout<<"Window"<<endl;
 	    }

 };
           
 