#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	if(s[0] == s[1] and s[1] == s[2] and s[2] == s[3])
		cout << "Weak";
	else if((s[0]-'0'+1)%10 == (s[1]-'0') and (s[1]-'0'+1)%10 == (s[2]-'0') and (s[2]-'0'+1)%10 == (s[3]-'0'))
		cout << "Weak";
	else
		cout << "Strong";
	return 0;
}