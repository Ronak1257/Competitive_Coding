// Link : https://www.codechef.com/problems/SLAB

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
        int sum=0;
        if(n>250000){
            sum+=(min(n,500000)-250000)*0.05;
        }
        if(n>500000){
            sum+=(min(n,750000)-500000)*0.1;
        }
        if(n>750000){
            sum+=(min(n,1000000)-750000)*0.15;
        }
        if(n>1000000){
            sum+=(min(n,1250000)-1000000)*0.2;
        }
        if(n>1250000){
            sum+=(min(n,1500000)-1250000)*0.25;
        }
        if(n>1500000){
            sum+=(n-1500000)*0.3;
        }
        cout<<n-sum<<endl;
    }
    return 0;
}