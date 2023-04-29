// LINK : https://www.codechef.com/problems/RETURNCHANGE

#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt; cin>>tt;
    while(tt--){
        int x; cin>>x;
        if(x%10<5){
            x-=(x%10);
        }
        else{
            x+=(10-(x%10));
        }
        cout<<100-x<<endl;
    }
    return 0;
}