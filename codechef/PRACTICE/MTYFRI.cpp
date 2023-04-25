// Link : https://www.codechef.com/problems/MTYFRI

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
        int a[n];
        vector<int>v1;
        vector<int>v2;
        int s1=0,s2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i&1){
                v2.push_back(a[i]);
                s2+=a[i]; 
            }
            else{
                v1.push_back(a[i]);
                s1+=a[i];
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int v1i=v1.size()-1;
        int j=0;
        while(k-- && v2.size()>j){
            if(v1[v1i]>v2[j]){
                s1-=v1[v1i];
                s1+=v2[j];
                s2+=v1[v1i];
                s2-=v2[j];
                v1i--;
                j++;
            }
            else{
                break;
            }
        }
        if(s1>=s2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}