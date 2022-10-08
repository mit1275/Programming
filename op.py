                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);          
 int main(){
  boost

    ll n,q;
    cin>>n>>q;

    string a;
    cin>>a;

    // ll count[n];

    
ll ans=0;
    if(n<=2)
    {
      ans=0;
    }
    else
    {
     
    for(ll i=0;i<n-2;i++)
    {
      if(a[i]=='a'&&a[i+1]=='b'&&a[i+2]=='c')
      {
        ans++;
      }
    }
  }

    

    for(ll i=0;i<q;i++)
    {
      ll pos;
      char c;
      cin>>pos>>c;
      pos-=1;

      if(a[pos]=='a'&&c!='a'&&(pos+1<n&&pos+2<n&&a[pos+1]=='b'&&a[pos+2]=='c'))
      {
        ans-=1;
      }
      else if(a[pos]!='a'&&(c=='a')&&(pos+1<n&&pos+2<n&&a[pos+1]=='b'&&a[pos+2]=='c'))
      {
        ans++;
      }
      else if(a[pos]=='b'&&c!='b'&&(pos-1>=0&&pos+1<n)&&a[pos-1]=='a'&&a[pos+1]=='c')
      {
        ans-=1;
      }
      else if(a[pos]!='b'&&(c=='b')&&(pos-1>=0&&pos+1<n)&&a[pos-1]=='a'&&a[pos+1]=='c')
      {
        ans++;
      }
      else if(a[pos]=='c'&&(c!='c')&&pos-2>=0&&pos-1>=0&&a[pos-2]=='a'&&a[pos-1]=='b')
      {
        ans-=1;
      }
      else if(a[pos]!='c'&&(c=='c')&&pos-2>=0&&pos-1>=0&&a[pos-2]=='a'&&a[pos-1]=='b')
      {
        ans+=1;
      }
      a[pos]=c;
      ll u=0;
      cout<<max(ans,u)<<endl;
      if(ans<0)
      {
        ans=0;
      }
    }
}