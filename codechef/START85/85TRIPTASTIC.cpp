// Link : https://www.codechef.com/problems/TRIPTASTIC

//this code is wrong update this code

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n,m,k;
bool chk(int mid, vector<vector<int>>pref,vector<vector<int>>s){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int a,b,c,d;
            a=i-mid;
            b=j-mid;
            c=i+mid;
            d=j+mid;
            a=max(a,1);
            b=max(b,1);
            c=min(c,n);
            d=min(d,m);
            int sum=pref[c][d]-pref[c][b-1]-pref[a-1][d]+pref[a-1][b-1];
            if((sum>=(k+1)) && (s[i-1][j-1])){
                return true;
            }
        }
    }
    return false;
}
int main(){
    ll t; cin>>t;
    while(t--){
        cin>>n>>m>>k;
        vector<vector<int>>a(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<int>> pref(n+2, vector<int>(m+2, 0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                pref[i][j]=a[i-1][j-1]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
            }
        }
        int l=0;
        int ans=-1;
        int r=max(n,m);
        while(l<=r){
            int mid=(l+r)/2;
            if(chk(mid,pref,a)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}