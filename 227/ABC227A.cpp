#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, k, a;
	cin >> n >> k >> a;
	cout << ((a+k-1)%n == 0 ? n : (a+k-1)%n);
	return 0;
}