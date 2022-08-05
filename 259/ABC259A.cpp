#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n,m,x,t,d;
	cin >> n >> m >> x >> t >> d;
	if(x <= m and m <= n)
		cout << t;
	else{
		cout << t-(x-m)*d;
	}
	return 0;
}