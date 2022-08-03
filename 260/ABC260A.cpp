#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string s;
	cin >> s;
	if(s[0] != s[1] and s[0] != s[2])
		cout << s[0];
	else if(s[0] != s[1] and s[1] != s[2])
		cout << s[1];
	else if(s[2] != s[1] and s[0] != s[2])
		cout << s[2];
	else
		cout << -1;
	return 0;
}