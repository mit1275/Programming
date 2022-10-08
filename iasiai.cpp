                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 bool allCharactersSame(string s) 
{ 
    int n = s.length(); 
    for (int i = 1; i < n; i++) 
        if (s[i] != s[0]) 
            return false; 
  
    return true; 
}           
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
            // deb(T);
            string a;
            cin>>t;
            if(allCharactersSame(t))
                cout <<t<< '\n';
            else{
                cout<<t[0];
                for(int i=1;i<t.length();i++){
                    if(t[i]!=t[i-1])
                        cout<<t[i];
                    else{
                        if(t[i-1]=='0'){
                            cout<<'1';
                            t[i-1]='1';
                        }
                        else{
                            cout<<'0';
                            t[i-1]='0';
                        }
                        i--;
                    }
                }
            }
            cout<<"\n";
        }
 
 } 
   
}
    
        