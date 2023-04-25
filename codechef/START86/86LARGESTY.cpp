// Link : https://www.codechef.com/problems/LARGESTY

#include<bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--){
        int n,x; cin>>n>>x;
        int a[n];
        vector<int> count(32);
        for(int i=0;i<n;i++){
            cin>>a[i];
            string s = bitset<32>(a[i]).to_string();
            reverse(s.begin(),s.end());
            for(int j=0;j<32;++j)count[j] += (s[j]-'0');
        }
        int val=0;
        int lid=0,lbit=0;
        for(int i=32;i>=0;--i){
            if(count[i]>0 && count[i]!=n){
                lbit=i;
            }
        }
        for(int i=0;i<32ll;++i){
            int cur=1ll<<i;
            if(cur>x) break;
            lid=i;
        }
        int f=0;
        for(int i=lid;i>=0;--i){
            if(f==0 && i==lbit) continue;
            int cur=(1ll<<i);
            val+=cur;
            if(val>x){
                if(count[i]>0 && count[i]!=n) f=1;
                val-=cur;
            }
        }
        cout<<val<<endl;
    }
    return 0;
}