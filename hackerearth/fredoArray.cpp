#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n; cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum/n+1<<endl;
    return 0;
}