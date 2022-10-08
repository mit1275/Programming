                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
 int main(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
  boost
 ll n;
 cin>>n;
 ll low=1,high=n,x,flag=0;
 if(n==1||n==0)
 {
 	cout<<n<<endl;
 }
 else
 {
 	while(low<=high)
 	{
 		ll mid=low+(high-low)/2;
 		if((mid*mid)==n)
 		{
 			flag=1;
 			cout<<mid<<endl;
 			break;
 		}
 		else if((mid*mid)>n)
 		{
 			high=mid-1;
 		}
 		else
 		{
 			low=mid+1;
            x=mid;
 		}
 	}
 	if(flag==0)
 	{
 		cout<<x<<endl;
 	}

 } 
   
}