                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 #include "Object.cpp"
 class Ifactory
 {
 public:
 	 virtual Ibutton* createbutton()=0;
 	 virtual Ibutton* show()=0;
 };
 class MacFactory:public Ifactory
 {
 	 public:
 	 	  Ibutton* createbutton()
 	 	  {
 	 	  	return new Mac();
 	 	  }
 	 	  Ibutton *show()
 	 	  {
 	 	  	return new Mac();
 	 	  }
 };
 class WindowFactory:public Ifactory
 {
 	 public:
 	 	Ibutton* createbutton()
 	 	  {
 	 	  	return new Window();
 	 	  }
 	 	  Ibutton *show()
 	 	  {
 	 	  	return new Window();
 	 	  }
 };
 class GUIFact
 {
 public:
 	    static Ifactory* createfactory(string ostype)
 	    {
 	    	if(ostype=="Mac")
 	    	{
 	    		return new MacFactory();
 	    	}
 	    	else
 	    	{
 	    		return new WindowFactory();
 	    	}
 	    }
 };          