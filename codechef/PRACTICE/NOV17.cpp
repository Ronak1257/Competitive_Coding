// Link : https://www.codechef.com/problems/NOV17

#include<bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin>>tt;
    while(tt--){
        int n,r; cin>>n>>r;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int h=INT_MAX;
        int l=0;
        int i=0;
        bool c=true;
        while(a[i]!=r){
            if(a[i]<r){
                if(a[i]>l){
                    l=a[i];
                }
                else{
                    cout<<a[i]<<"  ";
                    c=false;
                    break;
                }
            }
            else{
                if(a[i]<h){
                    h=a[i];
                }
                else{
                    cout<<a[i]<<" ";
                    c=false;
                    break;
                }
            }
            i++;
        }
        if(c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}