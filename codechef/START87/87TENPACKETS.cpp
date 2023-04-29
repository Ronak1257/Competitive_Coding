// LINK : https://www.codechef.com/problems/TENPACKETS

#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt; cin>>tt;
    while(tt--){
        int x,y; cin>>x>>y;
        y<2*x?cout<<2*y+x:cout<<5*x;
        cout<<endl;
    }
    return 0;
}