// Link : https://www.codechef.com/problems/PROBSET

#include<bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--){
        int n,m; cin>>n>>m;
        bool valid=1,weak=0;
        for(int i=0;i<n;i++){
            string a,b; cin>>a>>b;
            if(a=="correct"){
                for(int j=0;j<m;j++){
                    if(b[j]=='0'){
                        valid=0;
                        break;
                    }
                }
            }
            else{
                bool c=false;
                for(int j=0;j<m;j++){
                    if(b[j]=='0'){
                        c=true;
                        break;
                    }
                }
                if(!c){
                    weak=1;
                }
            }
        }
        if(!valid){
            cout<<"INVALID"<<endl;
        }
        else{
            if(weak){
                cout<<"WEAK"<<endl;
            }
            else{
                cout<<"FINE"<<endl;
            }
        }
    }
    return 0;
}