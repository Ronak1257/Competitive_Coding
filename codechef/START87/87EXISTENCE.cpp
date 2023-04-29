// LINK : https://www.codechef.com/problems/EXISTENCE

#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt; cin>>tt;
    while(tt--){
        ll x,y; cin>>x>>y;
        if((x*x)==2*y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}