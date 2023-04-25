// Link : https://www.codechef.com/problems/CANCHEF

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t; cin>>t;
	while(t--){
	    int x,y; cin>>x>>y;
	    if(7.5*x>=y){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
