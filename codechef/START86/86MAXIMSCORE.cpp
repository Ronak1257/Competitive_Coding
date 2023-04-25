// Link : https://www.codechef.com/problems/MAXIMSCORE

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
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini=INT_MAX;
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<mini) mini=abs(a[i]-a[i-1]);
    }
    cout<<mini<<endl;
}