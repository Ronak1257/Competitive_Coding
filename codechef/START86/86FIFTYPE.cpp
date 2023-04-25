// Link : https://www.codechef.com/problems/FIFTYPE

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
int jkl(int n){
    int temp=0;
    if(n==50) return 0;
    else if(n<50){
        temp++;
        return jkl(n+2);
    }
    else{
        temp++;
        return jkl(n-3);
    }
}
void solve(){
    int n; cin>>n;
    int ans=jkl(n);
    cout<<ans<<endl;
}