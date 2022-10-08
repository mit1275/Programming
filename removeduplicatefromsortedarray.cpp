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
  ll t;
  cin>>t;
  while(t--)
  {
ll n,m;
cin>>n;
ll a[n],x=0,sum=0,count=0;
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
cin>>m;
ll b[m];
for(ll i=0;i<m;i++)
{
	cin>>b[i];
}
ll d[100000];
if(max(n,m)==n)
{
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		if(a[i]==b[j])
		{
			d[count++]=i;
		}
	}
}
}
else
{
	for(ll i=0;i<m;i++)
	{
		for(ll j=0;j<n;j++)
		{
          if(b[i]==a[j])
		{
			d[count++]=i;
		}
		}
	}
}
for(ll i=0;i<count;i++)
{
	if(d[i+1]-d[i]==1)
	{
		x++;
		continue;
	}
	else
	{
		if(x>=1||x==0)
		{
			sum++;
			x=0;
		}
		x=0;
	}
}
cout<<sum<<endl;
}
}