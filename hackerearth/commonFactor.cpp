#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll a,b; cin>>a>>b;
    ll n=__gcd(a,b); //ans is gcd
	ll con=0;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			if(n/i==i){
				con++;
			}
			else{
				con+=2;
			}
		}
	}
    cout<<con<<endl;
    return 0;
}