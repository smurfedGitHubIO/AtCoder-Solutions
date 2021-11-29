#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	if(s == "##" or (s[0] == '#' and t[0] == '#') or t == "##" or (s[1] == '#' and t[1] == '#'))
		cout << "Yes";
	else
		cout << "No";
}