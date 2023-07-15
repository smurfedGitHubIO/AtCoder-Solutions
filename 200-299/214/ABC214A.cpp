#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	if(a >= 1 and a <= 125)
		cout << 4;
	else if(a >= 126 and a <= 211)
		cout << 6;
	else
		cout << 8;
	return 0;
}