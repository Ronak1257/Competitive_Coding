// Link : https://www.codechef.com/problems/INDTDUM

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int run=0;
	    int count=0;
	    for(int i=1;i<=n;i++){
	        int temp;
	        cin>>temp;
	        run+=temp;
	        if(i==run){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
