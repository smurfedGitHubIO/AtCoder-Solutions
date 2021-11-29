#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string s;
	ll k;
	cin >> s >> k;
	ll mx = 0, counter = 0, current = 0, last = -1;
	for(ll i=0; i<s.length(); i++){
		if(last == -1)
			last = i;
		if(s[i] == '.'){
			if(counter == k){
				while(s[last] != '.' and last <= i){
					current -= 1;
					last += 1;
				}
				current -= 1;
				last += 1;
				counter -= 1;
			}
			counter += 1;
			current += 1;
		}
		else
			current += 1;
		mx = max(mx, current);
	}
	cout << mx;
	return 0;
}