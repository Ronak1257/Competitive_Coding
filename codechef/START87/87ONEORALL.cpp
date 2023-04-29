// LINK : https://www.codechef.com/problems/ONEORALL

#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9 + 7
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt; cin>>tt;
    while(tt--){
        ll n; cin>>n;
        vector<ll>v(n);
        ll mini=INT_MAX;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(mini>v[i]){
                mini=v[i];
            }
            sum+=v[i];
        }
        if(n&1){
            if(sum&1){
                cout << "CHEF" << endl;
            }
            else{
                cout << "CHEFINA" << endl;
            }
        }
        else{
            if(mini&1){
                cout << "CHEF" << endl;
            }
            else{
                if(sum&1){
                    cout << "CHEF" << endl;
                }
                else{
                    cout << "CHEFINA" << endl;
                }
            }
        }
    }
    return 0;
}