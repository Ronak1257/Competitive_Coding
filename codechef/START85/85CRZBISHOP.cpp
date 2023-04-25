// Link : https://www.codechef.com/problems/CRZBISHOP

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int x,y;
	    if(n==1 || n==2){
	        cout<<0<<endl;
	        continue;
	    }
	    if(n&1){
	        x=(n+1)/2;
	        y=(n-1)/2;
	        cout<<2*y+x-2<<endl;
	    }
	    else{
	        x=n/2;
	        y=n/2;
	        cout<<2*y+x-3<<endl;
	    }
	}
	return 0;
}
