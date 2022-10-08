                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main()
 {

   map<int,int>mp;
   int a[4];
    for(int i=0;i<4;i++)
    {
    	cin>>a[i];
    	mp[a[i]]++;
    }
for(auto it=mp.begin();it!=mp.end();it++)
{
	cout<<it->first<<" "<<it->second<<endl;
}

}