#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (min(b,d)-max(a,c) <= 0 ? 0 : min(b,d)-max(a,c));
	return 0;
}