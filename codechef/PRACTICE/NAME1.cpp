// Link : https://www.codechef.com/problems/NAME1
#include<bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--){
        string a,b; cin>>a>>b;
        vector<int>v(28,0);
        for(int i=0;i<a.size();i++){
            v[a[i]-97]++;
        }
        for(int i=0;i<b.size();i++){
            v[b[i]-97]++;
        }
        bool c=false;
        int n; cin>>n;
        for(int i=0;i<n;i++){
            string s; cin>>s;
            for(auto j:s){
                if(v[j-97]>0){
                    v[j-97]--;
                }
                else{
                    c=true;
                    break;
                }
            }
        }
        if(c) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}