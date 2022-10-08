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
ll m,s;
cin>>m>>s;
ll d[1000];
ll x=llround(pow(10,m))-1;
ll y=llround(pow(10,m-1));
ll sum=0,count=0,res=0,w=0;
for(ll i=y;i<=x;i++)
{
  ll z=i;
  sum=0;
  while(z!=0)
  {
    sum+=(z%10);
    z=z/10;
  }
  if(sum==s)
  {
  	d[w++]=i;
  	sum=0;
  }
}
if(w==0)
{
	cout<<"-1"<<" "<<"-1";
}
else
{
	cout<<d[0]<<" "<<d[w-1];
}   
}