// Link : https://www.codechef.com/problems/HOTEL

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
        int a[n];
        int d[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        vector<int>v(1001,0);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=a[i];j<d[i];j++){
                v[j]++;
                if(v[j]>ans){
                    ans=v[j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}