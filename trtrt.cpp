#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
    int t,n,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c>>d;
        if(((n*(a-b)<=(c+d)) &&(n*(a-b)>=(c-d)))||((n*(a+b)<=(c+d)) &&(n*(a+b)>=(c-d))))cout<<"Yes\n";
        else cout<<"No\n";

    }

    return 0;
}
