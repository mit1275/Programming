                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
struct Point
         {
         	int x,y;
         };
         bool mycomp(Point p1,Point p2)
         {
            return(p1.x>p2.x);
         }         
int main()
{
   Point a[]={{1,2},{4,2},{2,4}};
   sort(a,a+3,mycomp);
   for(auto i:a)
   {
   	cout<<i.x<<" "<<i.y<<endl;
   }
}