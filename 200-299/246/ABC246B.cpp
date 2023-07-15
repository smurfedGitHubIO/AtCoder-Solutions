#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll a, b;
	cin >> a >> b;
	double c = a/sqrt(a*a+b*b), d = b/sqrt(a*a+b*b);
	cout << fixed << setprecision(7) << c << " " << d;
	return 0;
}