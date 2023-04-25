// Link : https://www.codechef.com/problems/EPANLINK

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t; cin>>t;
	while(t--){
	    string n; cin>>n;
	    int len=n.length();
	   // cout<<len<<endl;
	    if(len==1){
	        cout<<int(n[0])-48<<endl;
	        continue;
	    }
	    else{
    	    int num=int(n[len-1])-48;
    	    int temp=int(n[len-2])-48;
    	    if(temp%2==0){
    	        cout<<num<<endl;
    	    }
    	    else{
    	        cout<<10+num<<endl;
    	    }
	    }
	}
	return 0;
}
