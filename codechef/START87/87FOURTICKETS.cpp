// LINK : https://www.codechef.com/problems/FOURTICKETS

#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        4*n>1000?cout<<"NO":cout<<"YES";
        cout<<endl;
    }
    return 0;
}