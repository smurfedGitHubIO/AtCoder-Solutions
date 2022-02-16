#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string s = "abcdefghijklmnopqrstuvwxyz";
	for(ll i=0; i<26; i++){
		ll x;
		cin >> x;
		cout << s[x-1];
	}
	return 0;
}