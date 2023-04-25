// Link : https://www.codechef.com/problems/PCJ18B

#include<bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        int ans=0;
        while(n>0){
            ans+=(n*n);
            n-=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}