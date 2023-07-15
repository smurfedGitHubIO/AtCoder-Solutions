#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string s;
	cin >> s;
	map<char, bool> msb;
	ll ans = 0;
	for(ll i=0; i<s.length(); i++){
		if(!msb[s[i]]){
			ans += 1;
			msb[s[i]] = 1;
		}
	}
	cout << (ans == 3 ? 6 : (ans == 2 ? 3 : 1));
	return 0;
}