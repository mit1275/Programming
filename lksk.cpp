#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
#define maxn 100009
ll a[maxn];
int main(){
    int i,j,n,k;
    ll sum,tmp,maxsum,Maxsum;
    char c;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        sum=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        ll maxh=a[1];
        maxsum=a[1];
        for(i=2;i<=n-1;i++){
            if(maxh<=0) maxh=a[i];
            else maxh+=a[i];
            maxsum=max(maxsum,maxh);
        }
        maxh=a[2];
        Maxsum=a[2];
        for(i=3;i<=n;i++){
            if(maxh<=0) maxh=a[i];
            else maxh+=a[i];
            Maxsum=max(Maxsum,maxh);
        }
        if(max(maxsum,Maxsum)>=sum) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

