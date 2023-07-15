#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
const ll INF = 1e17;

int main(){
	string s, t;
	cin >> s >> t;
	bool check = true;
	ll diff = ((s[0]-'a') - (t[0]-'a') + 26)%26;
	for(ll i=1; i<s.length(); i++){
		ll q = ((s[i] - 'a') - (t[i] - 'a') + 26)%26;
		if(q != diff){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}