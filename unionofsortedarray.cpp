                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);           
int main()
{ 
	#ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
	 freopen("output.txt", "w", stdout);
	 #endif
  ll n,m;
  cin>>n>>m;
  ll a[n],b[m];
  for(ll i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  for(ll i=0;i<m;i++)
  {
  	cin>>b[i];
  }
  ll i=0,j=0;
  while(i<n&&j<m)
  {
  	if(i>0&&a[i-1]==a[i])
  	{
  		i++;
  		continue;
  	}
  	if(j>0&&b[j-1]==b[j])
  	{
  		j++;
  		continue;
  	}
  	else if(a[i]>b[j])
  	{
  	  cout<<b[j]<<" ";
  	  j++;
  	}
  	else if(a[i]<b[j])
  	{
  		cout<<a[i]<<" ";
  		i++;
  	}
  	else
  	{
  		cout<<a[i]<<" ";
  	i++;
  	j++;
  }
  }
  // cout<<i<<" "<<j;
  while(i<n)
  {
  	if(i==0||a[i-1]!=a[i])
  	{
  		cout<<a[i]<<" ";
  	}
  	i++;
  }
  while(j<m)
  {
  	if((j==0)||(b[j-1]!=b[j]))
  	{
  		cout<<b[j]<<" ";
  	}
  	j++;
  }

}