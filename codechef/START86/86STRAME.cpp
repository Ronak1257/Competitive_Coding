// Link : https://www.codechef.com/problems/STRAME

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string a; cin>>a;
	    int s=0;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        if(v.size()==0){
	            v.push_back(a[i]);
	        }
	        else{
	            if(v[v.size()-1]!=a[i]){
	                v.pop_back();
	                s++;
	            }
	            else{
	                v.push_back(a[i]);
	            }
	        }
	    }
	    if(s%2==0){
	        cout<<"Ramos"<<endl;
	    }
	    else{
	        cout<<"Zlatan"<<endl;
	    }
	    
	    
	}
	return 0;
}
