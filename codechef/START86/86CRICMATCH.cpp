// Link : https://www.codechef.com/problems/CRICMATCH

#include<bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;

void solve();
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--) solve();
    return 0;
}

void solve(){
    int n,m; cin>>n>>m;
    if(m*36>=n) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}