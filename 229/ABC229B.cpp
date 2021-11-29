#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string s, t;
	cin >> s >> t;
	ll sl = s.length(), tl = t.length();
	if(s.length() < t.length()){
		for(ll i=0; i<tl-sl; i++)
			s = '0' + s;
	}
	if(t.length() < s.length())
		for(ll i=0; i<sl-tl; i++)
			t = '0' + t;
	for(ll i=s.length()-1; i>=0; i--){
		if((s[i]-'0')+(t[i]-'0') >= 10){
			cout << "Hard";
			return 0;
		}
	}
	cout << "Easy";
	return 0;
}