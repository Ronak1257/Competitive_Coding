// Link : https://www.codechef.com/problems/IPLTRSH

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t; cin>>t;
	while(t--){
	    int n,m; cin>>n>>m;
	    if(m>n){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<n-m<<endl;
	    }
	}
	return 0;
}
