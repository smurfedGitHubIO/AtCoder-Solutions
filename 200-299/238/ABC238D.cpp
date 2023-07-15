#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){
	ll a, s;
	cin >> a >> s;
	bool last = false, ans = true;
	ll carry = 0;
	if(s < a or s < a*2){
		ans = false;
	}
	else{
		for(ll i=0; (1LL<<i) <= s; i++){
			bool ab = (1LL<<i)&a;
			bool sb = (1LL<<i)&s;
			if((ab and sb and !carry) or (ab and !sb and carry)){
				ans = false;
				break;
			}
			if(ab or (!ab and carry and !sb)){
				carry = 1;
			}
			else{
				carry = 0;
			}
		}
	}
	cout << (ans ? "Yes\n" : "No\n");
}

int main(){
    ll t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}