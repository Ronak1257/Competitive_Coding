// Link : https://www.codechef.com/problems/POSPREFS


#include<bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--){
        int n,k; cin>>n>>k;
        vector<int>v(n+1,-1); //create vector with all -1 value
        int mo=min(k,(n+1)/2); // find minimum of k and odd value
        k-=mo;  
        int o=1;
        while(mo){
            v[o]=+1;
            mo--;
            o+=2;
        }
        int me=(n%2?n-1:n);
        while(k>0){
            v[me]=+1;
            me-=2;
            k--;
        }
        for(int i=1;i<=n;i++){
            cout<<v[i]*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}