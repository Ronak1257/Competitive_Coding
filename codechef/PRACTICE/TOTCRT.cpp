// Link : https://www.codechef.com/problems/TOTCRT

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
        map<string,int> m;
        for(int i=0;i<3*n;i++){
            string s;
            int a; cin>>s>>a;
            m[s]+=a;
        }
        multiset<int>v;  //use to store value in sorted order. it store duplicate value also
        for(auto i :m){
            v.insert(i.second);
        }
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}