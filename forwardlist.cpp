                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
int main()
{ 
   forward_list<int>l1;
   int x;
   for(int i=0;i<4;i++)
   {
   	cin>>x;
   	l1.push_front(x);
   }
   auto it=find(l1.begin(),l1.end(),3);
   // 
   if(it!=l1.end())
   {
   	l1.insert(it,100);
   }
   for(auto i=l1.begin();i!=l1.end();i++)
   {
   	cout<<*i<<endl;
   }
}