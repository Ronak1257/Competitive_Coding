// LINK : https://www.codechef.com/problems/ABPLUSC

#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt; cin>>tt;
    while(tt--){
        ll x; cin>>x;
        if(x > 1){
            if(x <= 1e6)
            cout << 1 << " " << 1 << " " << x - 1 << endl;
            else if(x > 1e6 && x % 1000000!=0)
            cout << 1000000 << " " << x / 1000000 << " " << x % 1000000 << endl;
            else
            cout << 1000000 << " " << x / 1000000 - 1 << " " << 1000000 << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}       