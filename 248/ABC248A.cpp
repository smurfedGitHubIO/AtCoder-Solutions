#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string s;
	cin >> s;
	ll q = 0;
	for(int i=0; i<9; i++){
		q += s[i]-'0';
	}
	cout << 45-q;
	return 0;
}