#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long int ll;

int main(){
	ll x, y, rad;
	cin >> x >> y >> rad;
	if(x == 0 and y == 0)
		cout <<"0 0";
	else{
		cout << fixed << setprecision(10) << cos(rad)*x << " " << sin(rad)*y;
	}
	return 0;
}