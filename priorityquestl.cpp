                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL); 
 //elements are inserted with priority order
 //allows insertion and deletion fromm front
 //elements are stored as vector by default
 // elements are inserted by priority order(largest value always at front)
 // no iterators are used
 //push insert element in sorted order,pop removes the top elemet(greatest elemtn)          
int main()
{
   priority_queue<string>s1;
   string a;
   for(int i=0;i<4;i++)
   {
   	cin>>a;
   	s1.push(a);
   }
   cout<<s1.top()<<endl;
   s1.pop();
   cout<<s1.top();
}