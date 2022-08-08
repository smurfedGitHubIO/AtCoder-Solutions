#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	int hr = x/60, min = x%60;
	cout << 21+hr << ":" << (min <= 9 ? "0" : "") << min;
	return 0;
}